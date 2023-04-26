#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a);
    if(a>999 && a <= 9999){
        b= a/1000;
        if(b%2== 0){
            printf("EVEN");
        }
        else{
            printf("ODD");
        }      
    }
    return 0;
}