
#include <iostream>
#include "MyUtil.h"

using namespace std;
void MyUtil::sayHello() {
    cout << "Hello" << endl;
}

bool MyUtil::inputOnlyInt(int x){
    bool isInt = true;
    string b = to_string(x);
    for(char item:b){
        if(!isdigit(item)){
            isInt = false;
        }
    }
    return isInt;
}