#include<iostream>
#include<string>
using namespace std;


int main() {

    int n, t, size;
    string str;
    cin >> n >> t;
    cin >> str;

    size = str.size();
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[j]== 'B' && str[j+1]== 'G')
            {
                str[j] = 'G';
                str[j+1] = 'B';
                j++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
