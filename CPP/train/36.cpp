#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int totalCost(float d, float l) {
    float a = 1, b = 10;
    return (a * d) + (b * l);
}

struct Way {
    char from;
    char to;
    int totalCost;
};

vector<Way> arr = {
    {'A','B',totalCost(5,0.2)},
    {'A','C',totalCost(3,0.5)},
    {'B','D',totalCost(2,0.7)},
    {'C','D',totalCost(4,0.3)},
    {'C','E',totalCost(6,0.6)},
    {'D','F',totalCost(5,0.9)},
    {'E','F',totalCost(2,0.4)},
    {'E','G',totalCost(3,0.2)},
    {'F','H',totalCost(4,0.8)},
    {'G','H',totalCost(2,0.1)},
    {'H','I',totalCost(3,0.5)},
    {'I','J',totalCost(4,0.2)},
    {'F','J',totalCost(6,0.7)}
};

// map เพื่อเก็บ cost ของ edge แต่ละเส้น เช่น "AB" -> 7
unordered_map<string, int> edgeCost;
unordered_map<char, vector<char>> graph;
vector<pair<string,int>> pathUiia;

void searchWay(char currentNode, char stop, int cost,string path) {

    path += currentNode;
    if (currentNode == 'J') {
        cout << path << " = " << cost << endl;
        pathUiia.push_back({path,cost});

        return;
    }
    for (char next : graph[currentNode]) {
        if (path.find(next) == string::npos) {
            string key = string(1, currentNode) + next; 
            searchWay(next, stop , cost + edgeCost[key],path);
        }
    }
}

int main() {
    // สร้างกราฟและ edgeCost
    for (auto w : arr) {
        graph[w.from].push_back(w.to);
        edgeCost[string(1, w.from) + w.to] = w.totalCost;

        cout << "Edge: " << w.from << " -> " << w.to
            << " | Cost: " << w.totalCost
            << " | Key: " << string(1, w.from) + w.to << endl;
    }

    char startNode = 'A', endNode = 'J';
    searchWay(startNode, endNode, 0,"");


    sort(pathUiia.begin(), pathUiia.end(), [](auto& a, auto& b) {
        return a.second < b.second;
    });

    cout << pathUiia[0].first << " ";

}
