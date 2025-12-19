#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ",arr[i]);
    }
    int max = 0;
    int min =0;

    for (int i = 0; i < N; i++)
    {
        if (arr[max] <= arr[i])
        {
            max =i;
        }
       
        if (arr[min] > arr[i])
        {
            min = i;
            //printf("%d",min);
        }

    }
   int temp = arr[min];
        arr[min] = arr[max];
        arr[max] = temp;
    for (int i = 0; i < N; i++)
    {
     
        printf("%d ", arr[i]);
    }
    return 0;
}
