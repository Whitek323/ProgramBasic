#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {6, "C++"}};
    
    // auto it = um.find("For");
    
    // if (it != um.end())
    //     cout << it->first << ": " << it->second;
    // else cout << "Not Found";

    cout << um[2];
    return 0;
}