#include <iostream>

using namespace std;

int main()
{
float x,y,r;
cout << "vvedite koordinati x,y" << endl;
cin >> x >> y;
if ((x-1)*(x-1)+y*y<=1) {
    cout << "tochka vxodit v oblast" << endl ;
}
    else {
    cout << "tochka ne vxodit v oblast" << endl ;
}
    return 0;
}
