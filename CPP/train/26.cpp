#include <iostream>
#include <string>
#include <algorithm> 
#include <cmath>

using namespace std;
int decimalToBinary(string n){
    int x,tmp = 0;
    for(int i=0;i<n.size();i++){

        int x = n[i] - '0';
        x = x * pow(2,n.size()-(i+1));
        tmp += x;
    }
    return tmp;

}
string decimalToBinary(int n){
    if(n == 0) return "0";
    string r = "";
    while(n>0){
        int x = n % 2;
        r = to_string(x) + r;
        n = n/2;
    }
    return r;
}
int main() {
    string binary = "110111";


    cout << binary << " -> " << decimalToBinary(binary) << endl;


    return 0;
}
