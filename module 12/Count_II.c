#include<stdio.h>
#include<string.h>
int main()
{   
    char a[1001];
    scanf("%s",&a);
    int i,count=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}