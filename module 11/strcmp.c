#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=strcmp(a,b);
    if(i<0){
        printf("A is smaller");
    }
    else if(i>0){
        printf("B is smaller");
    }
    else{
        printf("We're same dude");
    }
    return 0;
}