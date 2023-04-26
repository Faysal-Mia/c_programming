// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a>=b){
//         if(b<c){
//             printf("%d %d",b,a);
//         }
//         else{
//             printf("%d %d",c,a);
//         }  
//     }
//     else if(b>=c){
//         if(a<c){
//             printf("%d %d",a,b);
//         }
//         else{
//             printf("%d %d",c,b);
//         }  
//     }
//     else if(c>=a){
//         if(b<a){
//             printf("%d %d",b,c);
//         }
//         else{
//             printf("%d %d",a,c);
//         }  
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c){
        printf("%d ",a);
    }
    else if(b<=a && b<=c){
        printf("%d ",b);
    }
    else{
        printf("%d ",c);
    }
    
    if(a>=b && a>=c){
        printf("%d",a);
    }
    else if(b>=a && b>=c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}