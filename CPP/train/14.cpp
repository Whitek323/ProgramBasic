// 14. จงเขียนโปรแกรมรับตัวเลขจำนวนเต็ม แล้วตรวจสอบว่าเป็น Palindrome หรือไม่ (เช่น
// 121, 1331)


#include <iostream>
using namespace std;

int main(){
    cout << "ใส่ค่าตัวเลขตามด้วยช่องว่าง : ";
    bool Palindrome = true;
    int user_input;
    cin >> user_input;
    string user_string = to_string(user_input);
    int user_length = user_string.length();
    for(int i=1;i<=user_length;i++){
        if(user_string[i-1]!=user_string[user_length - i])Palindrome=false;      
    }

    string display = Palindrome ? "เป็น" : "ไม่เป็น";
    cout << user_input << " " << display << " Palindrome" << endl;

    return 0;
}