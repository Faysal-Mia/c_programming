#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char a[100];
    for(i=0;i<n;i++){
        scanf("%s",&a);
        if(strlen(a)>10){
            printf("%c%d%c\n",a[0],strlen(a)-2,a[strlen(a)-1]);
        }
        else{
            printf("%s\n",a);
        }
    }   
    return 0;
}