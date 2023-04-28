#include<stdio.h>
int main()
{
    int a=12,b,i,c;
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        c= b*i;
        printf("%d * %d = %d\n",b,i,c);
    }
    return 0;
}