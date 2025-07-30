// 6. จงเขียนโปรแกรมรับค่า n แล้วตรวจสอบว่า n เป็นจำนวนเฉพาะหรือไม่
// โดยใช้การวนลูปตรวจสอบหารตัวประกอบ


#include <iostream>
using namespace std;


bool isPrimeNumber(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0||n==1)return false;
    }
    return true;
}
int main(){
    cout << "ใส่ค่า n : ";
    int user_input;
    cin >> user_input;
    
    string display = isPrimeNumber(user_input)
                    ? "เป็นจำนวนเฉพาะ":"ไม่เป็นจำนวนเฉพาะ";
    cout << user_input << " : "<< display << endl;
    return 0;
}