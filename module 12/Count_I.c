#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}