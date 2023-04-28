#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n%2==0){
        for(j=n-2;j>=0;j=j-2){
        printf("%d ",a[j]);
    }
    }
    else{
        for(j=n-1;j>=0;j=j-2){
        printf("%d ",a[j]);
    }
    }
    return 0;
}