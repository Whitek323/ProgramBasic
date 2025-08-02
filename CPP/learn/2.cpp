#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<string> car_vector = {"Hello", "World", "Cat"};
    list<string> carv_list = {"Hello", "World", "Cat"};
    string car[3] = {"Hello", "World", "Cat"};
    int size = car_vector.size();
    string target = "CatC";

    int index=-1;
    for (int i = 0; i < size; ++i) {
        if (car[i] == target) {
            index = i;
            break;
        }
    }

    if (index!=-1) {
        cout << "\"" << target << "\" อยู่ที่ตำแหน่ง index = " << index << endl;
    } else {
        cout << "\"" << target << "\" ไม่พบใน array" << endl;
    }
    cout << "Vector use " << sizeof(car_vector) << endl;
    cout << "List use " << sizeof(carv_list) << endl;
    cout << "Arry use " << sizeof(car) << endl;

    return 0;
}
