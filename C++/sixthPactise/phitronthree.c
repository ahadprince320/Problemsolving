#include <stdio.h>
int main()
{
    char ch = 'A';
    int N;
    scanf("%d", &N);
    // printf("%d",N);
    for (int i = 1; i <= N; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
              printf("%c ", ch);
      
        }
        ch++;
        printf("\n");
    }

    return 0;
}
