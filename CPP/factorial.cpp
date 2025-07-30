/*
เขียนโปรแกรมรับค่า N (จำนวนเต็มบวก) และคำนวณค่าแฟคทอเรียลของ N 
เช่น 5! = 120 : 5 * 4 * 3 * 2 * 1
*/ 

#include <iostream>
#include <cmath>

using namespace std;

void isPositiveInteger(float p_num){
  string alert = " กรุณาใส่จำนวนเต็มบวก";
  if(p_num < 0){
    cout << p_num;
    cout << " น้อยกว่า 0"+alert;
  }

  if(fmod(p_num, 1.0) != 0.0){
    cout << p_num;
    cout << " คือทศนิยม"+alert;
  }


}

int main() 
{
  cout << endl;
  float number_1;
  printf("ใส่ตัวเลขของคุณ ");
  // scanf("%x",number_1);
  cin >> number_1;
  // printf("Number 1 is %x\n",&number_1);

  isPositiveInteger(number_1);

  
  int temp = number_1; 
  for(int i = 1;i < number_1;i++){
    int round = number_1 - i;
    
    temp = temp * round;
  }
  
  cout << "Factorial = ";
  cout << temp << endl;
  return 0;
}