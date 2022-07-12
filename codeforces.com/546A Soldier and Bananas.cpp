#include<iostream>
using namespace std;

int main(){

    int k, n, w, i, totalDollers=0;
    cin >> k >> n >> w;

    for(i=1; i<=w; i++)
    {
        totalDollers += (k*i);
    }

    if(totalDollers > n)
        cout << totalDollers-n << endl;
    else
        cout << 0 << endl;

    return 0;
}
