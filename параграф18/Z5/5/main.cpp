#include<iostream>

using namespace std;

void c(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << a << " " << b << endl;

    c(a, b);

    cout << a << " " << b;
    return 0;
}
