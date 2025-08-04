// เรียงลำดับจากน้อยไปมาก

#include <iostream>
using namespace std;

int main()
{
    int x[4] = {9, 4, 1, 5};
    cout << "size is" << sizeof(x)/sizeof(x[0]) << endl;
    for(int b;b<sizeof(x)/sizeof(x[0]);b++){
        int i = 0;
        for (int t : x)
        {
           
            if (x[i] > x[i + 1] && i < (sizeof(x) / sizeof(x[0]) - 1))
            {
                // switch
                int temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
            // }
            
            i++;
        }
    }

    for (int t : x)
    {
        cout << t << endl;
    }
    return 0;
}