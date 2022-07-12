/*
    The problem is about A. Football player similar
*/
#include<stdio.h>
#include<string.h>

int main(){

    char players[100];
    gets(players);

    int i, length, count = 1;
    length = strlen(players);

    if(length <= 100){
        for(i=0; i<length; i++){
            if(players[i] == players[i+1]){
                count++;
                if(count >= 7){
                    printf("YES\n");
                    return 0;
                }
            }else
                count = 1;
        }
        printf("NO\n");
    }

    return 0;
}
