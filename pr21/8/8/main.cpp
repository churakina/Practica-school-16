#include <iostream>

using namespace std;

int main()
{
    int F1=1, F2=1, sum=1, n=10, i;
    for ( int i=1; i<n; i++)
    {
        cout << sum << '_';
        sum= F1+F2;
        F1=F2;
        F2=sum;
     cout << "Chislo Fibonachi" << endl;
    }
    return 0;
}
