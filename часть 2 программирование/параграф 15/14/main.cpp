#include <iostream>
#include <string>
using namespace std;

string bin2dec(string s)
{
    int step = 1; s = 0;
    for (int i=s.size()-1; i>0; i--)
{
    int numb = s[i]-'0';
    s += numb * step;
    step *= 2;

} return s;

}
int main()
{
    string s;
    getline( cin, s);
    cout << s;

}
