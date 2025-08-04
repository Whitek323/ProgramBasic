// ข้อที่ 3: หาจำนวนตัวเลขที่หารด้วย 3 และ 5 ได้ในช่วง 1 ถึง N
// คำชี้แจง:
// รับค่า N จากผู้ใช้ แล้วแสดงตัวเลขทั้งหมดในช่วง 1 ถึง N ที่หารด้วยทั้ง 3 และ 5 ลงตัว

// ตัวอย่างอินพุต/เอาต์พุต:
// Input: 30  
// Output: ตัวเลขที่หารด้วย 3 และ 5 ได้ลงตัว: 15, 30
#include <iostream>

using namespace std;
int main(){
    unsigned int in[2] = {3,5};
    unsigned int u_in = 300;
    for(int i=1;i<=u_in;i++){
        if(i%in[0]==0&&i%in[1]==0){
            cout << i << endl;
        }
    }
  
    //cout << numeric_limits<unsigned int>::max() << endl;
}