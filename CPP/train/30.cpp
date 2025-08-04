// เขียนฟังก์ชันที่รับข้อความจากผู้ใช้ แล้วแสดงตัวอักษรที่ใช้
// Input: banana  
// Output: a b n

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    string input = "banana";
    string temp = "";
    for(int i=0;i<input.length();i++){
        
        int res = temp.find(input[i]);
        if(res == string::npos){
            temp += input[i];
        }
        // cout << input.find("x") << endl;
    }
    sort(temp.begin(),temp.end());
    for(char item:temp){

        cout << item << " ";
    }
    return 0;
}