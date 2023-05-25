#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[1000];
    scanf("%s %s",a,b);
    int c=strlen(a);
    int d= strlen(b);
    printf("%d %d\n%s %s",c,d,a,b);
    return 0;
}