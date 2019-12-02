#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
void drawCarBody()
{
POINT CarBody [8] = {{20,95}, {20,70}, {30,70}, {60,50}, {100,50},{120,70}, {160,80},{160,95} };
txSetFillColor (TX_LIGHTBLUE);
txPolygon (carBody, 8);
}
void drawCarWindows()
{
txSetFillColor (TX_BLACK);
POINT backWindow [4]= {{40, 70}, {95,55}, {70,55}, {70,70}};
txPolygon (backWindow,4);
POINT frontWindow [4] = {{75,55}, {95,55}, {110,70}, {75,50}};
txPolygon (frontWindow,4);
}
 void drawCarWheels()
 {
txSetFillColor (TX_GREEN);
POINT backWheels [4]= {{40, 80}, {95, 80}, {70, 80}, {70, 80}};
txPolygon (backWheels,4);
POINT frontWheels [4] = {{75,85}, {95,85}, {110,85}, {75,85}};
txPolygon (frontWheels,4);
 }
    return 0;
}

