#include <iostream>

using namespace std;

int main()
{
    int a;
    setlocale (LC_ALL, "Russian");
    cin >> a;
    if (a%10 == 1) {
        cout << "���" <<  endl; return 0;

    }


    if (a%10==2 or a%10==3  or a%10==4)
    {
        cout << "����" <<  endl;
        return 0;
    }
            if (a%100>4)
     {cout << "���" << endl;} else  if (a%100>=10 and a%100<=20)
        {cout << "���" << endl;
    return 0;}




    return 0;
}
