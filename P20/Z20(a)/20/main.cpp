#include <iostream>

using namespace std;

int main()
{
float x,y,r;
cout << "vvedite koordinati x,y" << endl;
cin >> x >> y;
if ((x*x+y*y>=4) && (x>0) && (y>0) && (x<=2) && (y<=x)) {
    cout << "tochka vxodit v oblast" << endl ;
}
    else {
    cout << "tochka ne vxodit v oblast" << endl ;
}
    return 0;
}
