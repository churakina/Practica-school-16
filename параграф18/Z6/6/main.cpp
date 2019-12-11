#include <iostream>
using namespace std;
int main()
{
   int a, b;

   cout << "vvedite a:";
   cin >> a;
   cout << "vvedite b:";
   cin >> b;
   cout << "do: a - " << a << ", b - " << b << endl;
   b = b ^ a;
   a = a ^ b;
   b = b ^ a;
   cout << "posle: a - " << a << ", b - " << b << endl;

   return 0;
}
