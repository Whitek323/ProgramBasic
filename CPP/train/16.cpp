// 16. จงเขียนโปรแกรมรับค่า n แล้วคำนวณผลรวมของกำลังสองของตัวเลขตั้งแต่ 1 ถึง n (∑
// i²)

#include <iostream>
using namespace std;

int sigmaTwo(int n){
    return n*n;
}

int main(){
    cout << "ใส่ค่า n : ";
    int user_input;
    cin >> user_input;
    int temp = 0;
    for(int i = 1;i<=user_input;i++){
        temp += sigmaTwo(i);
        // cout << "sigmaTwo(" << i << ") = "<< sigmaTwo(i) << endl;
    }
    cout << "(∑i²) = " << temp << endl;
    return 0;
}