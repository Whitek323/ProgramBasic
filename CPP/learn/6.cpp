#include <iostream> // For output operations
#include <limits>


using namespace std;
int main() {
    int8_t u = 14305;
    int x = 90;
    int y = u+x;
    cout << y;
    cout << "int: " << numeric_limits<int>::max() << endl;
    cout << "int 8: " << numeric_limits<int8_t>::max() << endl;
    cout << "short : " << numeric_limits<short>::max() << endl;

    cout << "long long: " << numeric_limits<long long>::max() << endl;

    cout << "float: " << numeric_limits<float>::max() << endl;

    cout << "double: " << numeric_limits<double>::max() << endl;

    cout << "unsigned int: " << numeric_limits<unsigned int>::max() << endl;

    return 0;
}