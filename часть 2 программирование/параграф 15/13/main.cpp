#include <iostream>

using namespace std;


string oneziro( string s )
{
    int n=0;
        for(int i=0; i<=s.size(); i++ )
        {
            if ( s[i] == '1' )
                n+=1;
        }
    if ( n%2==0 )
        s = "true";
    else
        s = "false";
    return s;
}
int main()
{
    string s;
    getline( cin, s);
    s=oneziro(s);
    cout << s;
}
