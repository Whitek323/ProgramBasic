// เขียนฟังก์ชันที่รับข้อความจากผู้ใช้ แล้วแสดงจำนวนครั้งของแต่ละตัวอักษร
// Input: banana  
// Output:
// a: 3  
// b: 1  
// n: 2
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    string input = "banana";
    string temp = "";
    vector<int> f = {};
    for (int i = 0; i < input.length(); i++)
    {
        int res = temp.find(input[i]);
        if(res==string::npos){
            temp += input[i];
            f.push_back(1);
        }else{
            f[res] = f[res] + 1;
        }
    }
    for (int i = 0; i < temp.length(); i++)
    {
        cout << temp[i] << " : " << f[i] << endl;
    }
    cout << endl;
    
    return 0;
}