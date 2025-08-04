// คำชี้แจง:
// รับตัวเลข N จากผู้ใช้ แล้วพิมพ์รูปสามเหลี่ยมที่มีความสูง N เช่น

// ตัวอย่างอินพุต/เอาต์พุต:
// Input: 5  
// Output:
//     *  
//    ***  
//   *****    
//  *******  
// *********
#include <iostream>
using namespace std;
int main(){
    int n;
    if(!(cin>>n))return cout << "โปรดใส่ตัวเลข",1;

    for(int i = 1; i<=n;i++){
 
        for(int j = 0; j<n-i;j++){
            cout << " ";
        }
        for(int j = 0; j<i*2-1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
