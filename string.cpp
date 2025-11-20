#include <iostream>
using namespace std;
int main()
{
    char str[100];
    // cin >> str;  // for input without spaces

    int x;
    cin >> x;
    cin.ignore(); // to ignore the newline character

    cin.getline(str, 100); // for input with spaces

    cout << x << " " << str << endl;

    return 0;
}