// คำชี้แจง:
// เขียนฟังก์ชันที่รับตัวเลข 3 ค่า แล้วคืนค่าตัวที่มีค่ามากที่สุด

// ตัวอย่างอินพุต/เอาต์พุต:
// Input: 12 7 25  
// Output: ค่ามากที่สุดคือ 25

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<int> uiia = {};
    int x;
    for(int i=1;i<=3;i++){
        if(!(cin >> x)){
            cout << "โปรดใส่ตัวเลข";
            return 1;
        }
        uiia.push_back(x);
    }
    sort(uiia.begin(),uiia.end());
    
    cout << uiia.back();
    
}