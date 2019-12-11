#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << ((x/8) %2) && 10 << ((x/4) % 2) && 10 << ((x/2) %2) && 10 <<(x %2 )&& 10;
    return 0;
}

