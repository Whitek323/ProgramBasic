#include <iostream>

using namespace std;
int INF = 10e6;
struct Edge {
    char from;
    char to;
    int cost;
};

struct storeEdge {
    char node;
    char from;
    int totalCost;
    bool visited;
};

char allNode[10] = {'A', 'B', 'C','D', 'E', 'F', 'G', 'H', 'I', 'J'};

Edge edge[13] = {
    {'A','B',7},
    {'A','C',5},
    {'B','D',12},
    {'C','D',9},
    {'C','E',8},
    {'D','F',13},
    {'E','F',2},
    {'E','G',6},
    {'F','H',3},
    {'G','H',2},
    {'H','I',1},
    {'I','J',4},
    {'F','J',7}
};

char startNode = 'A';
char endNode = 'J';

storeEdge nodeRec[10];


int findNodeIndex(char node)
{
    for(int i=0; i<10; i++)
    {
        if(allNode[i]==node)
        {
            return i;
        }
    }
    return -1;
}

int findLowCost(storeEdge data[], int num)
{

    int temp = INF;
    int lowNode = -1;
    for(int i=0; i<num; i++)
    {
        if(data[i].totalCost < temp && !data[i].visited)
        {
            temp = data[i].totalCost;
            lowNode = i;
        }
    }
    cout << lowNode << "----" << endl;
    return lowNode;
}

void printPath(storeEdge data[], int num)
{
    for(int i=0; i<num; i++)
    {
        cout << data[i].node << " " << data[i].from << " " << data[i].totalCost << " " << data[i].visited << endl;
    }
}
void printShortestPath(char endNode, storeEdge nodeRec[], int num) {
    string path = "";
    char current = endNode;

    // สร้าง path ย้อนหลัง
    while (current != 'X') {
        path = current + path;
        int idx = findNodeIndex(current);
        current = nodeRec[idx].from;
    }

    // แสดง path ทีละตัว
    cout << "Shortest Path: ";
    for (int i = 0; i < path.length(); ++i) {
        cout << path[i];
        if (i < path.length() - 1)
            cout << " -> ";
    }

    int idx = findNodeIndex(endNode);
    cout << "\nTotal Cost: " << nodeRec[idx].totalCost << endl;
}


int main()
{
    for (int i = 0; i < 10; i++)
    {
        nodeRec[i] = {allNode[i], 'X', INF, false};
    }

    char currentNode = startNode;
    int startIndex = findNodeIndex(currentNode);
    nodeRec[startIndex].totalCost = 0;

    while (true)
    {
        // อัปเดตรอบข้าง
        for (int i = 0; i < 13; i++)
        {
            if (edge[i].from == currentNode)
            {
                int toIdx = findNodeIndex(edge[i].to);
                int fromIdx = findNodeIndex(currentNode);
                int sumCost = nodeRec[fromIdx].totalCost + edge[i].cost;

                if (nodeRec[toIdx].totalCost > sumCost)
                {
                    nodeRec[toIdx].totalCost = sumCost;
                    nodeRec[toIdx].from = currentNode;
                }
            }
        }

        // mark ว่าเยี่ยมแล้ว
        int currentIndex = findNodeIndex(currentNode);
        nodeRec[currentIndex].visited = true;

        // หา next node
        int nextIndex = findLowCost(nodeRec, 10);
        if (nextIndex == -1)
        {
            cout << "NO PATH FOUND!" << endl;
            break;
        }

        currentNode = allNode[nextIndex];
        // cout << currentNode << "----" << endl;
    }

    // แสดงผล
    printPath(nodeRec, 10);

    int endIdx = findNodeIndex(endNode);
    if (nodeRec[endIdx].totalCost == INF) {
        cout << "No path to destination node." << endl;
    } else {
        printShortestPath(endNode, nodeRec, 10);
    }

    return 0;
}
