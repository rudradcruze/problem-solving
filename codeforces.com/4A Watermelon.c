/*
    The program is about the Watermelon of ever distribution
*/
#include<stdio.h>
int main(){

    int userKilo;
    scanf("%d", &userKilo);


    if(userKilo >= 1 && userKilo <= 100){
        if(userKilo <= 2 || userKilo%2!=0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
