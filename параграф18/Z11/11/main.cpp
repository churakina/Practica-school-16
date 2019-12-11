#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (x/8) % 2 << (x/4) % 2 << (x/2) % 2 << x % 2;
    return 0;
}
