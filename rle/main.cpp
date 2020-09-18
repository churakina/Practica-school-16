#include <iostream>
#include <string>
using namespace std;
int main()
{

 string s;
 cout << "vvedite stroky";
 getline(cin, s);
 int d = s.size();
    int pov = 1;
    int l = d;
    int o = 0;
 int mass[d];
 for (int i = 0; i < d - 1; i++){
    for (int k = i + 1; k <= d; k++){
      if (s[i] == s[k]){
    pov++;
    l--;}
 else{
    mass[o] = pov;
    o++;
    pov = 1;
    i = k; }}}
 cout << "szhatiye";
 for (int i = 0, o = 0; o < l; i += mass[o], o++){
    if (mass[o] == 1){
      cout << s[i];}
    else{
      cout << mass[o] << s[i];}}
 return 0;
}
