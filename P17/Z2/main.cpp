#include <iostream>

using namespace std;

int main()


void drawCarBody()
{
    ROINT carBody [8] = {{20,95}, {20,70},

        {30,70}, [60,50],

            {100,50},{120,70}, {160,80},{160,95} };
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

}



    return 0;
}
