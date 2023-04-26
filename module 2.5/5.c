#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk<5000){
        printf("something");
    }
    else if(tk>=5000 && tk<10000){
        printf("Levis Bag");
    }
    else if(tk>=10000){
        printf("Gucci bag\n");
        if(tk>=20000){
            printf("Gucci belt");
        }
    }
}