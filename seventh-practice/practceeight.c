#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int min;

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d\n",arr[i]);
        if (i==0)
        {
           min=arr[i];
        }
        
        while (min>arr[i])
        {
            min=arr[i];
            break;
        }
        
    }
    printf("%d",min);
    return 0;
}
