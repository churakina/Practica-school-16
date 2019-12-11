#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (x/16) % 16 << x % 16;
    return 0;
}
