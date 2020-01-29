#include <iostream>
#include <sstream>

using namespace std;

string addSpaces(string s, int width) {

}

void print(string s, int width) {
    istringstream str(s);
    string word, words;
    str >> words;

    while (!str.eof()) {
        str >> word;
        int len = words.size() + word.size() + 1;
        if (len < width) {
            words += ' ' + word;
        }
        if (len == width) {
            cout << words << ' ' << word << endl;
            words = "";
            str >> words;
        }
        if (len > width) {
            cout << addSpaces(words, width) << endl;
            words = word;
        }

    if (words.size() > 0)
        cout << " " << words << " ";

        if (len < width) {
            words += ' ' + word;
            words = word;
        }
} }

int main() {
    string str = "asdf aaaa bbbb" ;
    print(str, 10);
    return 0;
}
