#include <iostream>
#include <string>
using namespace std;

void extractFileName (string s)
{

    int p = s.rfind ("\\");
    if (p == string::npos)
    {
         cout << "no";
    } else  {
        string s1 = s.substr (p + 1);
        cout << s1<< endl;}

}
 int main ()
 {
     string s;
     cin >> s;
     extractFileName (s);
     return 0;
 }
