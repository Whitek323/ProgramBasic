// จงเขียนฟังก์ชัน square(x) เพื่อคืนค่ากำลังสองของ x
// และใช้ฟังก์ชันนี้ในโปรแกรมที่รับค่า n แล้วแสดงผล square(1) ถึง square(n)

#include <iostream>

using namespace std;

int square(int n){
    return n*n;
}

int main(){
    cout << "ใส่ค่า n : ";
    int x;
    cin >> x;
    
    for(int i = 1;i<=x;i++){
        cout << "square(" << i << ") = "<< square(i) << endl;
    }
    return 0;
}