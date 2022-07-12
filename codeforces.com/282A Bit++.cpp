#include<iostream>
using namespace std;

int changingBit(int x, char specifier[4])
{
    if((specifier[0] == '+') && (specifier[1] == '+')) { ++x; }
    else if((specifier[1] == '+' && specifier[2] == '+')) { x++; }
    else if((specifier[0] == '-' && specifier[1] == '-')) { --x; }
    else { x--; }

    return x;
}

int main() {

    int a, x=0, i;
    char specifier[4];

    cin >> a;
    for(i=0; i<a; i++)
    {
        cin >> specifier;
        x = changingBit(x,specifier);
    }

    cout << x;


    return 0;
}
