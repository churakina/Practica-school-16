#include <iostream>

using namespace std;
int R[4];
void O1( int numb, int value)
{
  R[numb] = value;
}
void O2( int cop, int b)
{
  R[cop] = R[b];
}
void O3( int k, int l)
{
  R[k] = R[k] + R[l];
}
void O4( int j, int f)
{
  R[j] = R[j] - R[f];
}
void O5( int a, int d)
{
  R[a] = R[a] | R[d];
}
void O6( int e, int g)
{
  R[e] = R[e] ^ R[g];
}
void O7( int h, int m)
{
  R[h] = R[h] & R[m];
}
void O8( int n, int o)
{
  R[n] != R[o];
}



int main()
{
    for (int i = 0; i < 4; i++) {
        R[i] = i;
    }

     for ( int i = 0; i < 4; i++) {
    cout << R[i] << ' ';
    cout  << endl;
    }
    string c;
    cin >> c;
    if (c[0] == '1')
    {
        int numb = c[1] - '0' ;
        int value = c[2] - '0' ;
        O1 (numb , value);
    }

    if (c[0] == '2')
    {
        int cop = c[1] - '0' ;
        int b = c[2] - '0' ;
        O2 ( b, cop);
    }

    if (c[0] == '3')
    {
        int k = c[2] - '0' ;
        int l = c[1] - '0' ;
        O3 (k , l);
    }

    if (c[0] == '4')
    {
        int j = c[2] - '0' ;
        int f = c[1] - '0' ;
        O4 (j , f);
    }
    if (c[0] == '5')
    {
        int a = c[1] - '0' ;
        int d = c[2] - '0' ;
        O5 (a , d);
    }
      if (c[0] == '6')
    {
        int e = c[1] - '0' ;
        int g = c[2] - '0' ;
        O6 (e , g);
    }
      if (c[0] == '7')
    {
        int h = c[1] - '0' ;
        int m = c[2] - '0' ;
        O7 (h , m);
    }
    if (c[0] == '8')
    {
        int n = c[1] - '0' ;
        int o = c[2] - '0' ;
        O8 (n , o);
    }
    for ( int i = 0; i < 4; i++) {
    cout << R[i] << ' ';
    cout  << endl;}
    return 0;
}
