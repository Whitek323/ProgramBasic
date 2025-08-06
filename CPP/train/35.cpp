#include <iostream>
using namespace std;

float totalCost(float d,float l){
    float a = 1,b=10;
    return (a*d)+(b*l);
}
void findExit(
    float arr[13][3],
    char node[10],
    int arr_row,
    float enter
){
    // int size_in_row = sizeof(arr[0])/sizeof(arr[0][0]);
    arr_row = 3;
    for(int i = 0;i<arr_row;i++){
        // int inner_exit = arr[i][1];
        if(arr[i][0]==enter){
            cout << node[(int)arr[i][0]] << ":" << arr[i][0] << " -> ";
            cout << node[(int)arr[i][1]] << ":" << arr[i][1] << " -> ";
            if(i==arr_row-1){

                cout << endl;
            }
            
            findExit(arr,node,arr_row,arr[i][1]);
            

            // cout << node[(int)arr[i][1]] << ":" << arr[i][0] << " -> ";
        }
        
    };
}
int main(int argc, char const *argv[])
{
    char node[10] = {'A','B','C','D','E','F','G','H','I' ,'J'};

    float arr[13][3] = {
    //from,to,
        {0,1,totalCost(5,0.2)},
        {0,2,totalCost(3,0.5)},
        {1,3,totalCost(2,0.7)},
        {2,3,totalCost(4,0.3)},
        {2,4,totalCost(6,0.6)},
        {3,5,totalCost(5,0.9)},
        {4,5,totalCost(2,0.4)},
        {4,6,totalCost(3,0.2)},
        {5,7,totalCost(4,0.8)},
        {6,7,totalCost(2,0.1)},
        {7,8,totalCost(3,0.5)},
        {8,9,totalCost(4,0.2)},
        {5,9,totalCost(6,0.7)}
    };
    int row = sizeof(arr) / sizeof(arr[0]);

    // findExit(arr,node,row,0);
    for(int i = 0;i<row;i++){
        cout << node[(int)arr[i][0]] << " -> ";
        cout << node[(int)arr[i][1]] << " : ";
        cout << arr[i][2];

        cout << endl;
    }
    cout << endl;
    return 0;
}
