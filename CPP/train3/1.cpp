//เขียนโปรแกรมรับค่าตัวเลขจำนวนเต็มจากผู้ใช้ 1 ค่า แล้วพิมพ์ออกมาว่าเป็น "เลขคู่" หรือ "เลขคี่"
// Input: 7  
// Output: เลขคี่
// 9:46
#include <iostream>
using namespace std;

int main(){
    int x;
    if(!(cin >> x)){
        cout << "กรุณาใส่ตัวเลข" << endl;
        return 1;
    }
    if(x%2==0){
        cout << "เลขคู่";
    }else if(x%2!=0){
        cout << "เลขคี่";
    }
    return 0;
}