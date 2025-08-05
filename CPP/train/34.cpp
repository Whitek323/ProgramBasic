#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct node{
    char from;
    char to;
    u_int8_t distance;
    float danger_level;
};
float totalCost(u_int8_t d,float l){
    float a = 1,b=10;
    return a*d+b*l;
}
void output(float totalCost){
    cout << "A -> J ค่า Total Cost ต่ำสุดคือ " << totalCost;
    // cout << "วิธีคือ " << method << endl; 
}
int main(int argc, char const *argv[]) {
    node ab;
    ab.from = 'A';
    ab.to = 'B';
    ab.distance = 5;
    ab.danger_level = 0.2;
    
    node ac;
    ac.from = 'A';
    ac.to = 'C';
    ac.distance = 3;
    ac.danger_level = 0.5;

    node bd;
    bd.from = 'B';
    bd.to = 'D';
    bd.distance = 3;
    bd.danger_level = 0.5;

    node cd;
    cd.from = 'B';
    cd.to = 'D';
    cd.distance = 3;
    cd.danger_level = 0.5;
    
    vector<node> all = {ab,ac,bd,cd};
    for(node item:all){
        cout << "Total cost is " << totalCost(item.distance,item.danger_level);
        cout << " " << item.from << "->" << item.to << endl;
    }
    return 0;
}