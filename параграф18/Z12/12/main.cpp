#include <iostream>

using namespace std;

int main()
{
    int x, a,b,d, e,f, r,c,c1,c2,c3,c4;
   cout<<a;
    b = a%10 ; c=b*1;
     d = a%100 ;c1= d*2;
     e = a%1000  ;c2= e*4;
     f = a%10000  ;c3= f*8;
     r = a%100000 ;c4= r*16;
     x = c+c1+c2+c3+c4;
     cin >> x;
    return 0;
}

