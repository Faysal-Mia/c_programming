#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>=97 && a <= 122){
        a = a-32;
        printf("%c", a);
    }
    else{
        a = a+32;
        printf("%c", a);
    }
}