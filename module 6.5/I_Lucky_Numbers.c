#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=99 && a>=10){
        int c = a/10;
        int d = a%10;
        if(c==0 || d==0){
            printf("YES");
        }
        else if(c%d==0 || d%c==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}

        