#include <iostream>
#include <cstdlib>

using namespace std;

int randInt (int a, int b)
{
    return a + rand () % (b-a+1);

}

int temp;

int main()
{
    const int M =5, N=3;
    int A [N] [M] ={};
         for (int i=0; i < N; i++ )
        for (int j = 0;  j < M; j++);
            A[i][j] = randInt (20,80);

    for (int i =0; i < N; i++)
    {
        for (int j =0 ; j< M ; j++)
        cout << A [i][j];
    cout <<endl;
    }

    for (int j =0; j <M; j++)
    {

        int temp = A [3][j];
        A [3][j] = A [5][j];
        A [5][j] = temp;
    }

    cout << endl;
    for (int i =0; i < N; i++)
    {
        for (int j =0 ; j< M ; j++)
        cout << A [i][j];
    cout <<endl;
    }




}




