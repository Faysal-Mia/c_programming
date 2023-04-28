#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        do{
            printf("%d ",b%10);
            b=b/10;
        }
        while(b!=0);
        printf("\n");
    }
    return 0;
}