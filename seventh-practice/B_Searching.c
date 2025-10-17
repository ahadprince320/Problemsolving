#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);     
    int arr[N];

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int X;
    scanf("%d", &X);     

    int position = -1;   


    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            position = i;  
            break;        
        }
    }

    printf("%d", position);  
    return 0;
}
