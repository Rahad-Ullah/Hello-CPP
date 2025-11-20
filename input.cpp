#include <iostream>
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;

    cout << x << endl
         << c << endl
         << d << endl;

    // print ascii value of character
    int ascii = c;
    cout << ascii << endl;
    cout << int(c) << endl; // type casting

    int y = 65;
    cout << char(y) << endl; // type casting

    

    return 0;
}