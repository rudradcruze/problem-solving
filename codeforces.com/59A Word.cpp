#include<iostream>
#include<string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

    string str;
    int strSize, countUpper=0, countLower=0;

    cin >> str;

    strSize = str.size();

    for(int i=0; i<strSize; i++)
    {
        if(isupper(str[i]))
            countUpper++;
        else
            countLower++;
    }

    if(countLower >= countUpper)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
        transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str << endl;

    return 0;
}
