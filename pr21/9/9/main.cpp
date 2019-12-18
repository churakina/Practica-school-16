#include <iostream>

using namespace std;
 bool issimpre (int x)
 {
    int n=0, i;
    for (i=2; i<x; i++);
    { if (x%i==0)
    {
        n++;}
    }

    return (n==0);
   }


int main(){
int n, x;
cout << "Vvedite kolichestvo chisel" << endl;
cin >> n;
if (x<n) {
    cout << n;
}
else {
    cout << "Oshibka";
}
return 0;

}

