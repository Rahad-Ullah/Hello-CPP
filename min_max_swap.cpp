#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    cout << min({a, b, 3, 7, 13}) << endl;
    cout << max({a, b, 20}) << endl;

    return 0;
}