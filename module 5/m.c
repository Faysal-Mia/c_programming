#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>=48 && a <= 64){
        printf("IS DIGIT");
    }
    else if(a>=65 && a <= 122){
        printf("ALPHA\n");
        if(a>=65 && a <= 96){
        printf("IS CAPITAL");
    }
    else if(a>=97 && a <= 122){
        printf("IS SMALL");
    }
    }
    return 0;
}