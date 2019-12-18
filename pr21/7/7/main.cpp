#include <iostream>

using namespace std;

int main()
{
    int F1, F2, F3, N;
    cin >> N;
    F1=1;
    F2=1;
    for (int i=0; i < N; i++)
   { cout << F1 << " ";
        F1=F2;
        F2=F3;
        F3=F2+F1;
   }
    return 0;
}
