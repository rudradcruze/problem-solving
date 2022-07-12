#include<iostream>
#include<string>
using namespace std;

int main(){

    int round, i, wordSize;
    string wordTest;

    cin >> round;
    for(i=0; i<round; i++)
    {
        cin >> wordTest;
        wordSize = wordTest.length();
        if(wordSize <= 10)
        {
            cout << wordTest << '\n';
        }
        else
        {
            cout << wordTest[0] << wordTest.length()-2 << wordTest[wordTest.length()-1] << '\n';
        }
    }

    return 0;
}
