// 18. จงเขียนโปรแกรมรับสตริงจากผู้ใช้ ซึ่งประกอบด้วยตัวเลขคั่นด้วยช่องว่าง (space)
// แล้วแปลงเป็นลิสต์ตัวเลขเพื่อคำนวณค่าเฉลี่ย (average)

#include <iostream>
#include <list>

using namespace std;

int main(){
    cout << "ใส่ค่าตัวเลขตามด้วยช่องว่าง : ";
    
    string user_input , temp;
    getline(cin,user_input);
    list<int> uiia = {};

    for(char letter:user_input){
        if(isdigit(letter)){
            temp += letter;
        }else if(letter == ' '){
            uiia.push_back(stoi(temp));
            temp.clear();
        }
    }

    float sum = 0;
    for (int item : uiia) {
        sum += item;
    }
    cout << "average = " << sum/uiia.size() << endl;
    return 0;
}