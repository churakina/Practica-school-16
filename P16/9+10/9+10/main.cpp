#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
    txCreateWindow (1000, 800);
    txSetColor (TX_YELLOW, 100);
    txLine (100, 200, 100, 200);
    txSetFillColour (TX_YELLOW);
   // ����
    txSetColor (TX_YELLOW, 25);
    txLine (100, 200, 100, 400 );
     // ������ ����
     txSetColor (TX_YELLOW, 25);
    txLine (100, 400, 200, 500 );
    //����� ����
     txSetColor (TX_YELLOW, 25);
    txLine (100, 400, 0, 500 );
    // ������ ����
     txSetColor (TX_YELLOW, 25);
    txLine (100, 300, 200, 400 );
     // ����� ����
     txSetColor (TX_YELLOW, 25);
    txLine (100, 300, 0, 400 );
 return 0;
}
