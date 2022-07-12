#include<iostream>
using namespace std;
int main(){

    int a, count=0, countOver=0;
    cin >> a;

    while(countOver<a)
    {
        if(countOver+5 <= a)
        {
            countOver += 5;
            count++;
        }else if(countOver+4 <= a)
        {
            countOver += 4;
            count++;
        }else if(countOver+3 <= a)
        {
            countOver += 3;
            count++;
        }else if(countOver+2 <= a)
        {
            countOver += 2;
            count++;
        }else if(countOver+1 <= a)
        {
            countOver += 1;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
