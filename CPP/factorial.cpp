#include <iostream>
using namespace std;

int main() 
{
    int number_1 = 5;
    // cin >> number_1;
    int temp = number_1;
    
    if(number_1 < 0){
      cout << "น้อยกว่า 0";
    }
    if((number_1+1) % 2 ==0){
      cout << "เลขคี่";
      if(number_1 % 2 != 0){
          cout << "Is Decimal ";
      }
    }
    
    for(int i = 1;i < number_1;i++){
      int round = number_1 - i;
      
      temp = temp * round;
    }
    
    cout << temp;
    return 0;
}