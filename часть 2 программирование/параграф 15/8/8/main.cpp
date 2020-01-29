#include <iostream>
#include <string>
using namespace std;

void extractFileName (string s)
{
    int p = s.rfind ('\\');
     ints.replace (0, p, "D:\DEV\CPP") "D:\DEV\CPP\sharik.exe" ;
    if (p == string::npos)
    {
         cout << "no";
    } else  {
        string s1 = s.substr (p+1);
        cout << s1<< endl;}

}
 int main ()
 {
     string s;
     cin >> s;
     extractFileName (s);
     return 0;
 }
