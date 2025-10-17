#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    // Step 1: Take first input separately
    scanf("%d", &arr[0]);
    int max = arr[0]; // initialize max properly

    // Step 2: Read the rest and find max
    for (int i = 1; i < a; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max) // use if instead of whil