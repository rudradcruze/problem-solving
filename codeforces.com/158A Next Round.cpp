#include<iostream>
using namespace std;

int main(){

    int n, k, counts=0, i;
    cin >> n >> k;
    int a[100];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int temp = a[k-1];

    for(i=0; i<n; i++)
    {
        if(a[i] >= temp && a[i] > 0)
        {
            counts++;
        }
    }
    cout << counts;

    return 0;
}
