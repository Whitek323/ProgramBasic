// 12. จงเขียนโปรแกรมรับตัวเลขจำนวนเต็ม (บวกหรือไม่ก็ได้) แล้วคำนวณจำนวนหลัก (digit
// count) ของตัวเลขนั้น

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "ใส่ค่าตัวเลขตามด้วยช่องว่าง : ";
    
    int user_input;
    cin >> user_input;
    
    cout << "จำนวนหลัก = " << to_string(user_input).length();

    return 0;
}