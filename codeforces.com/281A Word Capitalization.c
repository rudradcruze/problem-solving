/*
    This program is about Word Capitalization
*/
#include<stdio.h>
#include<string.h>
int main(){

    char string[999];
    gets(string);

    if((string[0] >= 'a') && (string[0] <= 'z'))
        string[0] = string[0] - 32;
    puts(string);

    return 0;
}
