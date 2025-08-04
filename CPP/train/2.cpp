#include <iostream>

using namespace std;

int square(int n){
    return n*n;
}

int main(){
    // cout << "input : n : ";
    int x;
    cin >> x;
    
    for(int i = 1;i<=x;i++){
        cout << "square(" << i << ") = "<< square(i) << endl;
    }
    return 0;
}