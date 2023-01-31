#include <iostream>

using namespace std;
#define x 5
// Conditional compilation as the name implies that the code is compiled if certain condition(s) hold true
// Normally we use if keyword for checking some condition
int main()
{

#ifdef x
    cout << "X is defined";
#else
    cout << "X is not defined";
#endif
}