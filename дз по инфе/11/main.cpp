#include <iostream>
#include "cmath"
using namespace std;
int main ()
{
    int k, c=0;
    cin >> k;
    for (int i=0; i<k; i++)
    {
        c += 9* pow(10,i);
}
k = pow (10, k-1);
for (k; k<=c; k++)
   {
cout << k << endl;
}
 return 0;
}

