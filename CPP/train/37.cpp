#include <iostream>
#include <limits>
using namespace std;

const int N = 10;
const double INF = 1e9;
double alpha = 1.0;
double beta = 10.0;

// ชื่อโหนด
char nodes[N] = {'A','B','C','D','E','F','G','H','I','J'};

// ฟังก์ชันหาหมายเลขโหนดจากตัวอักษร
int getNodeIndex(char name) {
    for (int i = 0; i < N; i++) {
        if (nodes[i] == name) return i;
    }
    return -1;
}

// เมนโปรแกรม
int main() {
    // กราฟ [จาก][ถึง] = TotalCost
    double cost[N][N];

    // เริ่มต้นค่าทั้งหมดเป็น INF
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cost[i][j] = INF;

    // สร้างข้อมูลเส้นทาง (แบบไม่มีทิศทาง)
    struct EdgeInput { char from, to; double dist, danger; } edges[] = {
        {'A','B',5,0.2}, {'A','C',3,0.5},
        {'B','D',2,0.7}, {'C','D',4,0.3},
        {'C','E',6,0.6}, {'D','F',5,0.9},
        {'E','F',2,0.4}, {'E','G',3,0.2},
        {'F','H',4,0.8}, {'G','H',2,0.1},
        {'H','I',3,0.5}, {'I','J',4,0.2},
        {'F','J',6,0.7}
    };

    int edgeCount = sizeof(edges)/sizeof(edges[0]);

    for (int i = 0; i < edgeCount; i++) {
        int u = getNodeIndex(edges[i].from);
        int v = getNodeIndex(edges[i].to);
        double total = alpha * edges[i].dist + beta * edges[i].danger;
        cost[u][v] = total;
        cost[v][u] = total; // ไม่มีทิศทาง
    }

    // เริ่มต้น Dijkstra
    int start = getNodeIndex('A');
    int end = getNodeIndex('J');
    double dist[N];
    bool visited[N];
    int prev[N];

    for (int i = 0; i < N; i++) {
        dist[i] = INF;
        visited[i] = false;
        prev[i] = -1;
    }

    dist[start] = 0;

    for (int count = 0; count < N - 1; count++) {
        double minDist = INF;
        int u = -1;
        for (int i = 0; i < N; i++) {
            if (!visited[i] && dist[i] < minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        if (u == -1) break; // ไม่มีทางไปต่อ

        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (!visited[v] && cost[u][v] < INF && dist[u] + cost[u][v] < dist[v]) {
                dist[v] = dist[u] + cost[u][v];
                prev[v] = u;
            }
        }
    }

    // แสดงผลเส้นทาง
    if (dist[end] == INF) {
        cout << "ไม่พบเส้นทางจาก A ถึง J" << endl;
    } else {
        cout << " เส้นทางที่ปลอดภัยที่สุดจาก A ถึง J: ";
        int path[N], pathLength = 0;
        int node = end;
        while (node != -1) {
            path[pathLength++] = node;
            node = prev[node];
        }
        for (int i = pathLength - 1; i >= 0; i--) {
            cout << nodes[path[i]];
            if (i > 0) cout << " → ";
        }
        cout << "\n TotalCost = " << dist[end] << endl;
    }

    return 0;
}