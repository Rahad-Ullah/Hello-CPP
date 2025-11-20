#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d = 3.1416;

    cout << fixed << setprecision(2) << d << endl; // controls the number of decimal places

    return 0;
}