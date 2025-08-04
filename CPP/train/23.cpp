// คำชี้แจง:
// เขียนโปรแกรมเพื่อรับข้อความ 1 บรรทัดจากผู้ใช้ 
// แล้วนับจำนวนตัวอักษรที่เป็นสระ (เช่น 'a', 'e', 'i', 'o', 'u')

// ตัวอย่างอินพุต/เอาต์พุต:
// Input: Hello World  
// Output: มีสระทั้งหมด 3 ตัว

//txt = "hello"
//txt[2]

#include <iostream>
using namespace std;
int main(){
    string x;
    int tmp = 0;
    if(!getline(cin,x))return cout << "ใส่ข้อความ", 1;

    for(int i=0;i<x.length();i++){
        tmp += x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u' ? 1 : 0;

    }
    cout << "มีสระทั้งหมด "<< tmp <<" ตัว" << endl;
}