// จงเขียนฟังก์ชัน fib(n) เพื่อคืนค่าลำดับ Fibonacci ที่ตำแหน่ง n (กำหนด fib(0)=0,
// fib(1)=1) และให้โปรแกรมรับค่า n แล้วแสดง fib(n)
//input(n) 0, 1, 2, 3, 4, 5, 6,  7,  8,  9, 10, 11,  12,  13,  14,  15,  16,   17,
//output   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,

#include <iostream>
#include <vector>

using namespace std;
int fib(int n){
    vector<int> uiia = {0,1,1,2};
    if(n>3){
        for(int i=3;i<n;i++){
            uiia.push_back((uiia[i-1] + uiia[i]));
        }
    }
    return uiia[n];
}
int main(){
    int n;
    cout << "ใส่ค่า fibo : ";
    
    cin >> n;
    
    cout << "fibo(" << n << ") = " << fib(n) << endl;

    return 0;
}