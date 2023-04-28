#include<stdio.h>
int main()
{
    int n,i,j,index,value;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);     
    }
        scanf("%d %d",&index,&value);
        for(i=0;i<n;i++){
        a[index]=value; 
    }
        for(j=n-1;j>=0;j--){
        printf("%d ",a[j]);   
    }
 
    return 0;
}