#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int max = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d\n",arr[i]);
        while (max<arr[i])
        {
            max=arr[i];
            break;
        }
        
    }
    printf("%d",max);
    return 0;
}
