#include <iostream>
#include "TXLib.h"
using namespace std;

int main()

{
    int xCenter, yCenter, R;
    txCreateWindow (400,400);
    txSetColour (TX_BLUE);
    txRectangle (0, 0, 400, 400);
     R = 10;
     xCenter=R, yCenter=200;

void drawBall (int xCenter, int yCenter, int R);
    {
        txSetColour (TX_TRANSPARENT);
        txSetFillColour (TX_YELLOW);
        txCircle ( xCenter, yCenter, R);
    }

    void clearBall (int xCenter, int yCenter, int R );
    {
        txSetColour (TX_TRANSPARENT);
        txSetFillColour (TX_BLUE);
        txCircle ( xCenter, yCenter, R);

    }
    while (xCenter <= 400-R) {
        drawBall ( int xCenter, int yCenter, int R);
        txSleep (20);
        clearBall ( xCenter, yCenter,  R);
        xCenter +=5;
    }

    return 0;
}
