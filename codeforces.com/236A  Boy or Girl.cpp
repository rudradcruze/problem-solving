#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main(){
    string userInput;
    cin >> userInput;
    int count=0;

    sort(userInput.begin(), userInput.end());
    for(int i=0; i<userInput.size(); i++)
    {
        if(userInput[i] != userInput[i+1])
            count++;
    }

    if(count%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;


    return 0;
}
