// สร้างโปรแกรมรับค่า n คืนค่า n+(n-1) ไปเรื่อยๆจนเหลือ n-1 = 0 โดยใช้ Function Recursion 


#include <iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return n + sum(n-1);
    }else{
        return 0;
    }
}
int main(int argc, char const *argv[]) {
    int n;
    if(!(cin>>n))return cout << "โปรดใส่ตัวเลข",1;
    cout << sum(n);
    return 0;
}