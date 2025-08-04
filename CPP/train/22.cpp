// คำชี้แจง:
// เขียนฟังก์ชันที่รับตัวเลข 3 ค่า แล้วคืนค่าตัวที่มีค่ามากที่สุด

// ตัวอย่างอินพุต/เอาต์พุต:
// Input: 12 7 25  
// Output: ค่ามากที่สุดคือ 25

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxVector(){
    int8_t max_input = 3; 
    vector<int> b = {};
    for(int8_t i=1;i<=max_input;i++){
        int x;
        if(!(cin >> x))return cout << "โปรดใส่ตัวเลข",1;
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    return b.back();

}
int maxByStd(){
    int a, b, c;
    if (!(cin >> a >> b >> c)) return cout << "โปรดใส่ตัวเลข", 1;
    return max(a,max(b,c));
}
int main(){
    unsigned int x = maxByStd();
    cout << "ค่ามากสุดคือ " << x << endl;
    return 0;
}