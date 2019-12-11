#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (x/64) % 8 << (x/8) % 8 << x % 8;
    return 0;
}
