#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int count = 0;

    for (int i = 0; i < a; i++)
    {

        while (i % 2 != 0)

        {
            count++;
            
            // printf("%d \n",i);
            break;
        }
    }
            printf("%d",count);
    
    return 0;
}
