#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100];
    scanf("%s %s",a,b);
    for(int i=0;i<=strlen(b);i++){
        a[strlen(a)+i]=b[i];
    }
    printf("%s",a);
    return 0;
}