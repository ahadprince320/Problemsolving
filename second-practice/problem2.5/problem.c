#include <stdio.h>
int main()
{

    int N ;
    scanf("%d",&N);
    if (-1000 <= N <= 1000)
    {
        if (N == 0)
        {
            printf("Zero");
        }
        else
        {
            printf("Non zero");
        }
    }else{
        printf("You need to check this condision -1000 <= N <= 1000");   }
}
