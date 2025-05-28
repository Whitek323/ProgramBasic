#include <iostream>
#include <string>
using namespace std;

bool isDecimal(const string& str) {
    for (char c : str) {
        if (!isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}
int main() {
    string input;
    cout << "Input your number: ";
    cin >> input;

    if (isDecimal(input)) {
        cout << "Is Decimal" << endl;
    } else {
        cout << "Not a Decimal" << endl;
    }

    return 0;
}