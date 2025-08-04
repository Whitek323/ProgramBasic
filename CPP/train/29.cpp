// ให้เขียนโปรแกรมเพื่อรับตัวเลขจำนวนเต็มบวก N จากผู้ใช้ แล้วให้แสดง 
// ผลรวมของจำนวนเต็มคู่ทั้งหมดที่อยู่ในช่วง 1 ถึง N (รวม N ด้วยถ้า N เป็นเลขคู่)

#include <iostream>

using namespace std;

int main(){
    int x,tmp = 0;
    if(!(cin >> x))return cout << "โปรดใส่ตัวเลข",1;
    for(int8_t i=1;i<=x;i++){
        if(i%2==0){
            tmp += i;
        }
    }

    cout << tmp;
    return 0;
}