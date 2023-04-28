#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((int)(a)>=97 && (int)(a)<=121){
        a = a+1;
    }
    else if((int)(a)==122){
        a=a-25;
    }
    printf("%c",a);
    return 0;
}