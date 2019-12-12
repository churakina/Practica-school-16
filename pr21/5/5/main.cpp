#include <iostream>

using namespace std;

int main()
{
    for (int k=100; k<=999; k++) {
        int squareK = k*k;
        if (squareK % 1000 == k )
        cout  << k << endl;
    }

    return 0;
}
