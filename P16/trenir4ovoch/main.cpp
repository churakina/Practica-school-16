#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{
    txCreateWindow (800,600) ;
    txSetPixel (10, 20, TX_LIGHTGREEN);
    cout << hex << txGetPixel (10, 20);
    txSetColour (TX_GREEN, 5);
    txLine (10, 20, 100, 150);
    txSetFillColour (TX_GREEN);
    POINT contour [3] = {{0,0},{100, 100},{0,50}};
    txPolygon (contour, 3);
    return 0;
}
