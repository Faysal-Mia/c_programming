// #include<stdio.h>
// int main()
// {
//     long long int a,b,c,case1=0,case3=0;
//     scanf("%lld %lld %lld",&a,&b,&c);
//     if(a>=b && c>=b){
//         case1=b;
//         a=a-b;
//         c=c-b; 
//         b=b-case1;   
//     }
//     else if(b>=a && c>=a){
//         case1=a;
//         b=b-a;
//         c=c-a;
//         a=a-case1;
//     }
//     else if(b>=c && a>=c){
//         case1=c;
//         a=a-c;
//         b=b-c;
//         c=c-case1;
//     }

//     if(a>=c*2){
//         case3=c;
//     }
//     else{
//         case3=a/2;
//     }
//     printf("%lld", case1+case3);
//     return 0;
// }





#include<stdio.h>
int main()
{
    long long int a,b,c,case3=0,x=2*10^18;

    scanf("%lld %lld %lld",&a,&b,&c);
    if(a<x){
        x=a;
    }
    if(b<x){
        x=b;
    }
    if(c<x){
        x=c;
    }
    a=a-x;
    b=b-x;
    c=c-x;
    printf("%lld", x);
    // if(a>=c*2){
    //     case3=c;
    // }
    // else{
    //     case3=a/2;
    // }
    // printf("%lld", x+case3);
    // return 0;
}