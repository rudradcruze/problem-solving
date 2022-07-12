#include<string>
#include<iostream>
#include <algorithm>
using namespace std;

int main() {

    string userInput;
    int i, sizeing;
    cin >> userInput;

    sort(userInput.begin(), userInput.end());
    sizeing = userInput.size()/2;

    for(i=sizeing; i<userInput.size(); i++)
    {
        if(i!=sizeing && i!=userInput.size())
        {
            cout << '+';
        }
        cout << userInput[i];
    }

    return 0;
}
