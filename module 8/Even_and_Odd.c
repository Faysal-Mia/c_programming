#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]%2==0){
            sum1=sum1+ar[i];
        }
        else if(ar[i]%2!=0){
            sum2=sum2+ar[i];
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}