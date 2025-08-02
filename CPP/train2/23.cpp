#include <iostream> 
#include <vector>
using namespace std;


int main(){
	vector<int> arry;
	for(int i=0;i<5;i++){
		int x;
		cin	>> x;
		arry.push_back(x);
	}

  bool count = false;
  bool ab = false;
  bool ac = false;
  bool ad = false;
  bool ae = false;
  bool bc = false;
  bool bd = false;
  bool be = false;
  bool cd = false;
  bool ce = false;
  bool de = false;

  
  for (int i = 0; i < 4; i++){
    if (arry[0] == arry[1]){
       count = true;
       ab = true;
    }

    if (arry[0] == arry[2]){
       count = true;
       ac = true;
    }
    if (arry[0] == arry[3]){
       count = true;
       ad = true;
    }

    if (arry[0] == arry[4]){
       count = true; 
       ae = true;
    }
    if (arry[1] == arry[2]){
       count = true;
       bc = true;
    }

    if (arry[1] == arry[3]){
       count = true;
       bd = true;
    }
    if (arry[1] == arry[4]){
       count = true;
       be = true;
    }
    if (arry[2] == arry[3]){
       count = true;
       cd = true;
    }
    if (arry[2] == arry[4]){
       count = true;
       ce = true;
    }
    if (arry[3] == arry[4]){
       count = true;
       de = true;
    }
    
  }
  //cout << a << b << c << d << e << endl;
  if (count == false){
      cout << "NO" << endl;
    }
    else if (count == true){
      if (ab == true || ac == true || ad == true || ae == true){
        cout << "แสดงผล" << arry[0] << endl;
      }
      if (bc == true || bd == true || be == true){
        cout << "แสดงผล" << arry[1] << endl;
      }
      if (cd == true || ce == true){
        cout << "แสดงผล" << arry[2] << endl;
      }
      if (de == true){
        cout << "แสดงผล" << arry[3] << endl;
      }

    }

  return 0;
  }
    
        