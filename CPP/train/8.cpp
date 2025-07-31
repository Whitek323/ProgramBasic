// จงเขียนฟังก์ชัน fib(n) เพื่อคืนค่าลำดับ Fibonacci ที่ตำแหน่ง n (กำหนด fib(0)=0,
// fib(1)=1) และให้โปรแกรมรับค่า n แล้วแสดง fib(n)
//ลำดับ 0 1 2 3 4 5 6 7
//fib 0 1 1 2 3 5 8 13

#include <iostream>
#include <list>

using namespace std;
void fib(int n){
    int x = 0;
    for(int i=1;i<=n;i++){
        cout << i << endl;
    }
    cout << x;

}
int main(){
    int n;
    cout << "ใส่ค่า fibo : ";
    cin >> n;
    // cout << "Fibonacci คือ " << fib(n) << endl;
    fib(n);
    return 0;
}