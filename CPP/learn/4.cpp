#include <iostream>
#include <vector>
#include <numeric> // For accumulate
using namespace std;
int main() {
    // 1. Getting the first element
    vector<int> number = {10, 20, 30, 40, 50};
    int temp = 0;




    int sum = accumulate(numbers.begin(), numbers.end(), -7);
    cout << "Sum of elements: " << sum << endl; 

    for(int item:numbers){
        temp += item;
    }
    cout<< " U "<<temp-7<< endl;
    cout<< "Vector use "<<numbers.size()<< endl;
    cout << "Vector use " << sizeof(numbers) << endl;




    return 0;
}