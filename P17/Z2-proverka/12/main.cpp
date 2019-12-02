#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
txCreateWindow (800, 600);
POINT c[8] = {{20,95}, {20,70},
{30,70}, {60,50},
{100,50},{120,70},
{160,80},{160,95}};
txSetFillColor (TX_LIGHTBLUE);
txPolygon (c, 8);

txSetFillColor (TX_BLACK);
POINT a[4] = {{40, 70}, {95,55},
{70,55}, {70,70}};
txPolygon ( a, 4);
POINT b[4] = {{75, 55}, {95, 55},
{110, 70}, {75, 70}};
txPolygon (b, 4);

txSetFillColour (TX_GRAY);
txCircle (50,95,13);
txCircle (120,95,13);
     return 0;
}
