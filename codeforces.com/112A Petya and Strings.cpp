#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    string su1;
    string su2;
    cin >> su1;
    cin >> su2;

    if(strcmpi(su1.c_str(), su2.c_str()) == 0)
    {
        cout << '0';
    }
    else if(strcmpi(su1.c_str(), su2.c_str()) < 0)
    {
        cout << "-1";
    }
    else
    {
        cout << '1';
    }

    return 0;
}
