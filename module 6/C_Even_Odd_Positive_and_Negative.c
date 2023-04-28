#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    int c1=0,c2=0,c3=0,c4=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0){
            c1+=1; 
        }
        if(a%2!=0){
            c2++;
        }
        if(a>0){
            c3++;
        }
        if(a<0){
            c4++;
        }
    }
    printf("Even: %d\n",c1);
    printf("Odd: %d\n",c2);
    printf("Positive: %d\n",c3);
    printf("Negative: %d",c4);
    return 0;
}