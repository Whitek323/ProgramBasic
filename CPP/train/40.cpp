#include <iostream>

using namespace std;

// int main()
// {

//     int input,i=0;
//     cin>>input;
//     int x = 1,tmp=0;
//     int digit = to_string(input).size();

//     while (i < digit)
//     {

//         tmp += input/x%10;
//         x *= 10;
//         i++;
//     }
//     cout << tmp;
// }

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    // int x = static_cast<int>('6');


    string input;
    int temp = 0;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        temp += input[i]-'0';
        // temp += input[i]-48;
    }
    cout << temp;
    return 0;
}