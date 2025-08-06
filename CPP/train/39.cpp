#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

const float ALPHA = 1.0, BETA = 10.0;

int totalCost(int d, float l)
{
    return ALPHA * d + BETA * l;
}
struct node
{
    char from;
    char to;
    int toTalCost;
};

unordered_map<string, int> costAcc;
unordered_map<char, vector<char>> graph;
vector<pair<string,int>> nodePath;
vector<node> allNode = {
    {'A', 'B', totalCost(5, 0.2)},
    {'A', 'C', totalCost(3, 0.5)},
    {'B', 'D', totalCost(2, 0.7)},
    {'C', 'D', totalCost(4, 0.3)},
    {'C', 'E', totalCost(6, 0.6)},
    {'D', 'F', totalCost(5, 0.9)},
    {'E', 'F', totalCost(2, 0.4)},
    {'E', 'G', totalCost(3, 0.2)},
    {'F', 'H', totalCost(4, 0.8)},
    {'G', 'H', totalCost(2, 0.1)},
    {'H', 'I', totalCost(3, 0.5)},
    {'I', 'J', totalCost(4, 0.2)},
    {'F', 'J', totalCost(6, 0.7)}
};

void findWay(char startNode, char endNode,int cost,string path)
{
    path += startNode;
    if (startNode == endNode) {
        cout << path << " = " << cost << endl;
        nodePath.push_back({path,cost});
    
    }
    for (char item : graph[startNode])
    {
        if(path.find(item) == string::npos){
            string key = string(1,startNode)+item;

            findWay(item, endNode,cost + costAcc[key],path);
        }
    }
}
int main()
{
    
    char startNode,endNode;
    cout << "ใส่จุดเริ่มต้น เช่น (A) : ";
    if(!(cin >> startNode))return cout << "กรุณาใส่โหนด(A-J)",1;
    cout << "ใส่จุดปลายทาง เช่น (J) : ";
    if(!(cin >> endNode))return cout << "กรุณาใส่โหนด(A-J)",1;

    
    for (node item : allNode)
    {
        costAcc[string(1,item.from)+item.to] = item.toTalCost;
            
        \
        graph[item.from].push_back(item.to);
    }

    findWay(startNode, endNode,0,"\t");

    sort(nodePath.begin(), nodePath.end(), [](auto& a, auto& b) {
        return a.second < b.second;
    });

    cout << nodePath[0].first << " ";
    cout << nodePath[0].second << " ";

    return 0;
}