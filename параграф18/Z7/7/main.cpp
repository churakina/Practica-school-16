#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a;
    cout << "Vvedennoe chislo " << a << endl;
    b = a % 10;
    c = a / 100;
    d = a / 10;
    d = d % 10;
    cout << "b = " << b << " c = " << c << " d = " << d;
    //cout << 'a' << 'b' << 'c' << endl;

    return 0;
}

