// รับรายการตัวเลขแล้วหาว่ามีเลขซ้ำหรือไม่
// 2,3,4,2,5
// 2
// 1,2,3,4,5
// No
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int arr[] = {2,4,9,5,5};
    string temp = "";
    unsigned int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < size; j++)
       {
            if(arr[i] == arr[j] & i != j){
                int res = temp.find(to_string(arr[i]));
                if(res==string::npos){
                    temp += to_string(arr[i]);
                }
            }
       }   
    }
    for (int i = 0; i < temp.length(); i++)
    {
        cout << temp[i] << " ";
    }
    if(temp.empty()){
        cout << "No";
    }
    cout << endl;
    return 0;
}