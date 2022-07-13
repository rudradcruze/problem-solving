#include<iostream>
#include<string>
using namespace std;

int main(){

    int i, n, countA=0, countD=0;
    string str;

    cin >> n;
    cin >> str;
    for(i=0; i<n; i++)
    {
        if(str[i]=='A')
            countA++;
        else
            countD++;
    }

    if(countA > countD)
        cout << "Anton" << endl;
    else if(countA < countD)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;


    return 0;
}
