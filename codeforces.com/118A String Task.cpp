#include<iostream>
#include<string>
using namespace std;

int main(){

    string userInput;
    int stringSize, i;
    cin >> userInput;
    char temp;

    stringSize = userInput.size();

    for(i=0; i<stringSize; i++)
    {
         "A", "O", "Y", "E", "U", "I",
        temp = (char)tolower(userInput[i]);
        if(temp == 'a' || temp == 'o' || temp == 'y' || temp == 'e' || temp == 'u' || temp == 'i') {
            continue;
        }
        else
        {
            cout << '.' << temp;
        }
    }

    return 0;
}
