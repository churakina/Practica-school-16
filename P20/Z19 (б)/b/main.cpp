#include <iostream>

using namespace std;

int main()
{
int x,y;
cout << "vvedite koordinati x,y" << endl;
cin >> x >> y;
if (y<=-x) {
    cout << "tochka vxodit v oblast" << endl ;
}
    else {
    cout << "tochka ne vxodit v oblast" << endl ;
}
    return 0;
}
