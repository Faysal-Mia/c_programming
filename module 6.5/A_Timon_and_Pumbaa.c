#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c>=0){
        printf("%d",c);
    }
    if(c<0){
        printf("0");
    }
    return 0;
}