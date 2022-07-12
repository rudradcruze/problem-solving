#include<iostream>
using namespace std;

int main(){

    int i, round, a, b, c, counting=0;
    cin >> round;
    for(i=0; i<round; i++)
    {
        cin >> a >> b >> c;
        if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1))
        {
            counting++;
        }
    }
    cout  << counting;

    return 0;
}
