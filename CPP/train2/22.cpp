#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x, n = 5;
    int r;

    vector<int> uiia = {};
    vector<int> temp = {};
    cout << "รับค่าตัวเลข" << endl;
    for (int i = 0; i < n; i++)
    {
        if (!(cin >> x))
        {
            cout << "โปรดใส่ตัวเลข" << endl;
            return 1;
        }
        else
        {
            uiia.push_back(x);
        }
    }
    cout << "แสดงผล" << endl;
    // for (int item : uiia)
    // {
    //     cout << item << " ";
    // }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (uiia[i] != uiia[j])
            {
                temp.push_back(uiia[j]);
              
            }
            // if(i+1 != 5){
            //     // for(int q = 0; q < temp[3]; q++){

            //         if(uiia[i]){
            //             cout << "ค่าซ้ำ" << temp[q] << endl;
            //         }
                // }
            // }
        }
     
        
        for (int b = 0 ; b < temp.size();b++)
        {
            cout << temp[b] << " ";
            // if(uiia[i] == temp[b]){
            //     cout << " ค่าซ้ำ" << uiia[i]<< endl;
            // }
        }
        cout << endl;

        temp.clear();

        // if(uiia[i] != uiia[i] && uiia[i+]){
    }

    return 0;
}