// โจทย์ที่ 3: เช็คปีอธิกสุรทิน
// รับค่าปี ค.ศ. แล้วแสดงว่าเป็นปีอธิกสุรทินหรือไม่

// กฎคือ:
// ถ้าหาร 4 ลงตัว → อาจจะเป็น

// แต่ถ้าหาร 100 ลงตัว ต้องหาร 400 ลงตัวด้วย ถึงจะใช่

#include <iostream>
#include <limits>
#include <fstream>
using namespace std;

string check(int year){
if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return "Leap year";
            }else{
                return "Not a Leap Year" ;
            }
        }else{
            return "Leap year" ;
        }
    }else{
        return "Not a Leap Year" ;
    }
}
int main(int argc, char const *argv[]) {
    // unsigned short year = {00};
    ofstream fout("leap.txt");
        if (!fout) {
        cerr << "ไม่สามารถเปิดไฟล์สำหรับเขียนได้\n";
        return 1;
    }
    for(unsigned short i;i<2700;i++){
        fout << i << " : " << check(i) << endl;
    }
    fout.close();
    return 0;
}