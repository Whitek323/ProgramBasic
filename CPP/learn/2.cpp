#include <iostream>
#include <vector>
#include <chrono>
#include <cstring>  // memset

using namespace std;
using namespace chrono;

const int N = 10000000; // 10 ล้าน

int main() {
    // จับเวลา + memory แบบคร่าว ๆ

    // ----- ARRAY -----
    int* arr = new int[N];
    memset(arr, 0, N * sizeof(int));

    auto t1 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i) arr[i] = i;
    long long sum1 = 0;
    for (int i = 0; i < N; ++i) sum1 += arr[i];
    auto t2 = high_resolution_clock::now();
    delete[] arr;

    auto duration_arr = duration_cast<milliseconds>(t2 - t1).count();

    // ----- VECTOR -----
    vector<int> vec;
    vec.reserve(N); // สำคัญ! เพื่อไม่ให้มี realloc หลายรอบ
    vec.resize(N);

    auto t3 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i) vec[i] = i;
    long long sum2 = 0;
    for (int i = 0; i < N; ++i) sum2 += vec[i];
    auto t4 = high_resolution_clock::now();

    auto duration_vec = duration_cast<milliseconds>(t4 - t3).count();

    // ----- OUTPUT -----
    cout << "=== Memory and Performance Comparison ===\n";
    cout << "Array:  size = " << N * sizeof(int) << " bytes\n";
    cout << "Vector: size = " << vec.capacity() * sizeof(int) << " bytes\n";
    cout << "Overhead: vector object = " << sizeof(vec) << " bytes\n";
    cout << "Array time  = " << duration_arr << " ms\n";
    cout << "Vector time = " << duration_vec << " ms\n";
    cout << "Sum check: " << sum1 << " vs " << sum2 << "\n";
}
