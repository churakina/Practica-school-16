#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int ch1 = x % 16;
    int ch2 = x / 16;

    if (ch2 < 10) {
        cout << ch2;
    } else {
        cout << char('a' + ch2 - 10);
    }


    if (ch1 < 10) {
        cout << ch1;
    } else {
        cout << char('a' + ch1 - 10);
    }

    //cout << (x/16) % 16 << x % 16;
    return 0;
}
