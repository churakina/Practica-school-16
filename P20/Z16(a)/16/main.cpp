#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a%10==1 or b%10 == 1 or c%10==1)  {
    cout << true << endl;
    }
    else {
    cout << false << endl;
    }
    /*if (b%10==1)  {cout << true << endl;
    }
    else {
    cout << false << endl;
    }
    if (c%10==1) {cout << true << endl;
    }
    else {
    cout << false << endl;
    }*/
    return 0;
}
