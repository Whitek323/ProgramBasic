#include <iostream>

using namespace std;

int main(){
    int n,tmp;
    
    if(!(cin >> n) || n < 1){
        cout << "error" << endl;
        return 1;
    }
    
    tmp = n;
    for(int i = 1;n>1;n--){

        tmp = tmp * (n-1);
    }
    cout << tmp << endl;

    return 0;
}