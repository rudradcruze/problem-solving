#include<iostream>
using namespace std;
int main(){

    int n, x,y,z, countX=0, countY=0, countZ=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        countX += x;
        countY += y;
        countZ += z;
    }

    if(countX==0 && countY==0 && countZ==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
