#include <iostream>

// Macro argument definition
#define area(a, b) (a * b)

using namespace std;

int main()
{
    int x = 2, y = 5;
    cout << "rectangle area = " << area(2, 5) << "\n";
    return 0;
}
