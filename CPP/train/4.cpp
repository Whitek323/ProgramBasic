// 4. จงเขียนฟังก์ชัน factorial(n) เพื่อคำนวณแฟกทอเรียล n! (นิยาม 0! = 1)
// และให้โปรแกรมรับค่า n แล้วแสดงผล

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0)return 0;

    int tmp = n;
    while(1 < n)
    {
        int round = n - 1;
        tmp = tmp * round;
        n--;
    }
    return tmp;
}
int main(){
    cout << "ใส่ค่า n : ";
    int user_input;
    cin >> user_input;

    cout << factorial(user_input);
    return 0;
}