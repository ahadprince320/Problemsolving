#include<stdio.h>
int main(){
    char arr[10025],arr2[10025];
    scanf("%s %s",arr,arr2);
    if (strcmp(arr, arr2)<0)
    {
      printf("%s\n", arr);
    }
    else
        printf("%s\n", arr2);
    
     return 0;
}
