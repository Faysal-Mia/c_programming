#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int i,count1=0,count2=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]>=65 && a[i]<=90){
            count1++;
        }
        if(a[i]>=97 && a[i]<=122){
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}