#include <iostream>
#include <string>
using namespace std;

void allWords (string word, string alphabet, int K, int &count)
{
    if ( K < 1)
    {
        cout << word << endl;
        count++;
        return;
    }
    for (int i = 0; i < alphabet.size (); i ++)
        allWords (word + alphabet [i], alphabet, K - 1, count );

}
int main ()
{
    string letters = "ABC";
    int count = 0;
    int wordLength = 3;
    allWords ( "", letters, wordLength, count);
    cout << count << endl;
    cin.get ();
}
