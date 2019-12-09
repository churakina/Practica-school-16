#include <iostream>
#include "TXLib.h"
using namespace std;
 int x,y,z,h;
 float rgb,rgb2,rgb3,rgb4;
      void drawCarBody ()
    {
      POINT carBody[8] = {{x,y},{x,y-25},
      {x+10,y-25},{x+40,y-45},
      {x+80,y-45},{x+100,y-25},
      {x+140,y-15},{x+140,y}};
      txSetFillColour (rgb);
      txPolygon ( carBody, 8 );
    }
    void drawCarWindows()
    {
        txSetFillColour( TX_WHITE );
       POINT a[4]={{x+20,y-25}, {x+45,y-40},
       {x+50,y-40},{x+50,y-25}};
       txPolygon ( a,4 );
       POINT b[4] ={{x+55,y-40}, {x+75,y-40},
       {x+90,y-25},{x+55,y-25}};
       txPolygon ( b, 4 );
    }
    void drawCarWheels()
    {
        txSetFillColour (rgb2);
        txCircle (x+30,y,13);
        txCircle (x+100,y,13);
    }


          void drawCarBody2 ()
    {
      POINT carBody[8] = {{z,h},{z,h-25},
      {z+10,h-25},{z+40,h-45},
      {z+80,h-45},{z+100,h-25},
      {z+140,h-15},{z+140,h}};
      txSetFillColour (rgb3);
      txPolygon ( carBody, 8 );
    }
    void drawCarWindows2()
    {
        txSetFillColour( TX_WHITE );
       POINT a[4]={{z+20,h-25}, {z+45,h-40},
       {z+50,h-40},{z+50,h-25}};
       txPolygon ( a,4 );
       POINT b[4] ={{z+55,h-40}, {z+75,h-40},
       {z+90,h-25},{z+55,h-25}};
       txPolygon ( b, 4 );
    }
    void drawCarWheels2()
    {
        txSetFillColour (rgb4);
        txCircle (z+30,h,13);
        txCircle (z+100,h,13);
    }
int main()
{
    cout <<"¬ведите координату y дл€ машинки номер один"<< endl;
    cin >>y;
    cout <<"¬ведите координату x дл€ машинки номер один"<< endl;
    cin >>x;
    cout <<"÷вет кузова в RBG дл€ машинки один"<< endl;
    cin >>rgb;
    cout <<"÷вет колес в RBG дл€ машинки один"<< endl;
    cin >>rgb2;
    cout <<"¬ведите координату y дл€ машнки номер два"<< endl;
    cin >>z;
    cout <<"введите координату x дл€ машинки номер два"<< endl;
    cin >>h;
    cout <<"цвет кузова в RBG дл€ машинки два "<< endl;
    cin >>rgb3;
    cout <<"цвет колес в RBG дл€ машнки два"<< endl;
    cin >>rgb4;
    txCreateWindow (500,400);
    drawCarBody();
    drawCarWindows();
    drawCarWheels();
    drawCarBody2();
    drawCarWindows2();
    drawCarWheels2();
    return 0;
    }
