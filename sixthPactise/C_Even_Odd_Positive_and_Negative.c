#include <stdio.h>
int main()
{
    int N;
    int X;
    int Even = 0,Odd =0,Positive=0,Negative=0;
    scanf("%d ", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);
        if (X % 2 == 0)
        {
            Even++;
        }else{
           Odd++;
        }
        if (X>0)
        {
           Positive++; 
        }else if (X<0)
        {
           Negative++;
        }
        
        
        
    }
    printf("Even: %d\n", Even);
    printf("Odd: %d\n", Odd);
    printf("Positive: %d\n", Positive);
    printf("Negative: %d\n", Negative);
    
    return 0;
}
