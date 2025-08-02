#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> aaa = {2,3,4,30,9};



    // auto uiia = find(aaa.begin(),aaa.end(),-2);
    // if(uiia != aaa.end()){
    //     cout << distance(aaa.begin(), uiia) << endl;
    // }







    sort(aaa.begin(),aaa.end());
    reverse(aaa.begin(),aaa.end());
    for(int item:aaa){
        cout << item << " ";
    }
    return 0;
}
