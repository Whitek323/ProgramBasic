
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{

    float p_num;
    std::cout << "Enter Number : "; // Use std::cout for consistency
    std::cin >> p_num;

    // fmod(p_num, 1.0) calculates the remainder of p_num / 1.0
    // If the remainder is NOT 0, the number has a fractional part.
    if (fmod(p_num, 1.0) != 0.0)
    {
        std::cout << p_num << " is a decimal number (คือทศนิยม) << std::endl";
    }
    else
    {
        std::cout << p_num << " is a whole number." << std::endl;
    }

    return 0;
}