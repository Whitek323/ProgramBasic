#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>

using namespace std;
int main(){
    vector<int> arr;
    vector<string> monkey = {"uiia","banana"};
    cout << monkey[1];
    int x = 5;
    for (int i = 0; i < x;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for(int i = 0;i < 5;i++){
        cout << arr[i] << " ";
        // printf(arr[i]);
    }
    cout << "\nArr type is \n" << typeid(arr).name();
    
    return 0;
}