#include <iostream>
#include <cmath>

using namespace std;

int NOD (int a, int b)
{
    if ( a == 0 or b == 0) return a + b;
    if (a > b)
        return NOD ( a % b, b );
    else
        return NOD (a, b % a);
}

int NOK (int a, int b)
{

    return (a * b) / NOD(a, b);

}

int main ()
{
    int a, b;
    cin >> a >> b;
    cout << NOK(a, b);
    return 0;
}
