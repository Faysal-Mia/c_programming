#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,tmp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max=INT_MIN,min=INT_MAX,min_pos, max_pos;
    for(i=0;i<n;i++){
        if(ar[i]<min)
        {
            min=ar[i];
            min_pos=i;
        }
        if(ar[i]>max)
        {
            max=ar[i];
            max_pos=i;
        }             
    }
        tmp=ar[min_pos];
        ar[min_pos]=ar[max_pos];
        ar[max_pos]=tmp;

    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }     
    return 0;
}




