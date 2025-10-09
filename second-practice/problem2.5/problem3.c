#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if ( 1 <= a, b <= 10000)
    {
        if (a%b==0|| b%a==0)
        {
            printf("Yes");
        }else
        {
            printf("No");
        }
        
        
    }
    
    
}
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     if ( 1 <= a, b <= 10000)
//     {
//         if (a%b==0)
//         {
//             printf("Yes");
//         }
//         else if(b%a==0)
//         {
//             printf("Yes");
//         }else{
//             printf("No");
//         }
        
        
//     }
    
// }