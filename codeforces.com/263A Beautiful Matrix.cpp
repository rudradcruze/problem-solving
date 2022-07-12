#include<iostream>
using namespace std;

int main() {

    int j, i, vertical, horizonal, matrixCheck;
    int visited;
    for(i=0; i<5; i++)
    {
        if(visited!=1) { vertical=i+1; }
        for(j=0; j<5; j++)
        {
            cin >> matrixCheck;
            if(matrixCheck == 1) { horizonal=j+1; visited=1; }
        }
    }

    if(horizonal>=3)
    {
        i = horizonal-3;
    }else {
        i = 3-horizonal;
    }

    if(vertical>=3)
    {
        j = vertical-3;
    }else {
        j = 3-vertical;
    }

    cout << i+j << '\n';


    return 0;
}
