#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
int x,y,r;
cout <<"������� ���������� x,y" << endl;
cin >> x >> y;
txCreateWindow (800, 600);
r=15;
POINT CarBody [8] = {{x, y}, {x, y-25},
{x+10, y-25}, {x+40, y-45},
{x+80, y-45},{x+100, y-25},
{x+140, y-15},{x+140, y} };
txSetFillColour (TX_LIGHTBLUE);
txPolygon (CarBody, 8);

POINT CarWindow1 [4]= {{x+50, y-40}, {x+50, y-40},
{x+50, y-25}, {x+20, y-25}};
txSetFillColour (TX_BLACK);
txPolygon (CarWindow1, 4);

POINT CarWindow2 [4]= {{x+75, y-40}, {x+55, y-40},
{x+55, y-25}, {x+90, y-25}};
txSetFillColour (TX_BLACK);
txPolygon (CarWindow2, 4);

txSetFillColour (TX_GRAY);
txCircle (x+30,y,r);

txSetFillColour (TX_GRAY);
txCircle (x+95,y,r);
    return 0;
}

