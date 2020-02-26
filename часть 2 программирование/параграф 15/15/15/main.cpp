#include <iostream>
#include <string>
using namespace std;

string bin2dec(string s)
{
    int step = 1; s = 0;
    for (int i=s.size()-1; i>0; i--)
{   if (s[i]>='0' and s[i]<='9')
{
    numb = s[i]-'0';
    }
    if (s[i]>='A' and s[i]<='F')
    {
        numb = s[i]-'A'+10;
    }
}
    int numb = 0;
    s += numb * step;
    step *= 16;

} return s;

}
int main()
{
    string s;
    getline( cin, s);
    cout << s;

}
