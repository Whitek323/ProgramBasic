// 10. จงเขียนโปรแกรมรับอุณหภูมิ (°C) จากผู้ใช้ แล้วแสดงผลว่า “เย็น” ถ้าอุณหภูมิน้อยกว่า
// 20, “อุ่น” ถ้าอุณหภูมิระหว่าง 20 ถึง 30 (รวม), “ร้อน” ถ้าอุณหภูมิมากกว่า 30

#include <iostream>
using namespace std;

int main(){
    cout << "รับอุณหภูมิ (°C) : ";
    int user_input;
    cin >> user_input;

    string temp = user_input > 30 ? "ร้อน" 
                : user_input < 30 && user_input > 20 
                ? "อุ่น" : "เย็น" ;

    cout << temp << endl;

    return 0;
}