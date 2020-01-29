#include <iostream>
#include <string>
using namespace std;

void printInWidth(string text, int width )
{
  for (int i = 0; i < text.size ();
  i++);
  {   w++;
      cout << text [i];
      if (w==width) {w = 0 ;
      cout << endl;}
  }
}
