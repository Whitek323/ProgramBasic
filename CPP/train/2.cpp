// จงเขียนฟังก์ชัน square(x) เพื่อคืนค่ากำลังสองของ x
// และใช้ฟังก์ชันนี้ในโปรแกรมที่รับค่า n แล้วแสดงผล square(1) ถึง square(n)

#include <iostream>
using namespace std;

int square(int n){
    return n*n;
}

int main(){
    cout << "ใส่ค่า n : ";
    int user_input;
    cin >> user_input;

    for(int i = 1;i<=user_input;i++){
        cout << "square(" << i << ") = "<< square(i) << endl;
    }
    return 0;
}