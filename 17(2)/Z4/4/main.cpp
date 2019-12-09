#include <iostream>
#include "TXLib.h"
using namespace std;
 int x,y;
 float rgb1,rgb2;
    void drawHead()
    {
        POINT drawHead[6] = {{x,y-20},{x+130,y-20},
                            {x+130,y-20},{x+130,y+85},
                            {x+130,y+85},{x,y+85}};
      txSetFillColour (rgb1);
      txPolygon ( drawHead, 6 );
    }
    void drawUssa()
    {
        POINT drawUssa[4] = {{x+35,y+45},{x+35,y+65},
        {x+95,y+45},{x+95,y+65}};
        txSetFillColour (rgb1);
        txPolygon ( drawUssa, 4 );
    }
    void drawYeys()
    {
        txSetFillColour (rgb2);
                            txCircle (x+30,y,12);
                            txCircle (x+100,y,12);
    }
int main()
{
    cin >>y;
    cin >>x;
    cin >>rgb1;
    cin >>rgb2;
    txCreateWindow (500,400);
    drawHead ();
    drawUssa();
    drawYeys();
    return 0;
    }
