#include<stdio.h>
int main()
{
    int n,b,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(a[i]==b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}