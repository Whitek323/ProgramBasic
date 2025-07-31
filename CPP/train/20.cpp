// 20. จงเขียนโปรแกรมรับรายการคะแนนนักเรียน แล้วคำนวณค่าเฉลี่ย และแสดงข้อความว่า
// “สอบผ่าน” ถ้าเกณฑ์ ≥ 50, “สอบไม่ผ่าน” ถ้า < 50
// พร้อมนับจำนวนผู้สอบผ่านและแสดงผลท้ายโปรแกรม


#include <iostream>
#include <list>

using namespace std;

int main(){
    int std_number;
    cout << "ใส่จำนวนนักเรียน : ";
    cin >> std_number;
    list<int> std_score = {};

    int i = 1;
    while(i <= std_number){
        int x;
        cout << "ใส่คะแนน : ";
        cin >> x;
        std_score.push_back(x);
        i++;
    }
    float sum_std_score = 0;
    for(int item:std_score){
        sum_std_score += item;
        if(item < 50){
            cout << item << " : สอบไม่ผ่าน" << endl;
        }else if(item >= 50){
            cout << item << " : สอบผ่าน" << endl;
        }
    }
    cout << "จำนวนผู้เข้าสอบ : " << std_score.size()<< endl;
    cout << "ค่าเฉลี่ย : " << sum_std_score/std_score.size()<< endl;
 

    return 0;
}