#include <iostream>

using namespace std;

int main()
{
    int input[] = {70,4,9,6,1};
    int tmp=0,i=0,j=0,k=0;
    int size = sizeof(input)/sizeof(input[0]);

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(input[j]<input[i]){
                // swap(input[j],input[i]);
                tmp = input[j];
                input[j] = input[i];
                input[i] = tmp;
            }
        }
        
    }
    
    for (int k = 0; k < size; k++)
    {
        cout << input[k] << " ";
    }
    return 0;
}
