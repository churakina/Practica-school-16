#include <iostream>
#include <cstdlib>
using namespace std;

int randInt (int a, int b)
{
    return a + rand () % (b-a+1);

}

int temp,i,j,sum;

int main()
{
    const int M =4, N=3;
    int A [N] [M] ={};
         for (int i=0; i < N; i++ )
        for (int j = 0;  j < M; j++);
            A [i][j] = randInt (0,1);

     for (int i = 0; i < N; i++)
        for (int j = 0; j<M; j++)
        sum += A[i] [j];


      int A [3][4] = {{1,0,0,1},
                      {0,0,1,1},
                      {1,1,0,1};


      for (int i =0; i < N; i++)
    {
      for (int j =0 ; j< M ; j++)
        cout << A [i][j];
        cout <<endl;
    }


