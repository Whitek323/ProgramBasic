#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 5;
    vector<int> bb = {4,2,3,2,4};
    vector<int> tmp = {};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < n; j++){
            if(bb[i] == bb[j] && i != j && i > j){
                // for(int c = 0;c<tmp.size();c++){

                //     if(bb[c] != bb[j]){
                //     }
                // }
                
                tmp.push_back(bb[i]);
            }
        }
        // if(){
                // cout << "ค่าซ้ำ " << tmp[tmp.size()-1] << endl;
        // }
        for(int item:tmp){
            cout << item << endl;
        }
        tmp.clear();
        
    }
    // if(tmp.size() == 0){
    //     cout << "No";
    // }


    return 0;
}