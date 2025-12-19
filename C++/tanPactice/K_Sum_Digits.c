#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    
    char A[N + 1]; 
    scanf("%s", A); 
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i] - '0'; 
    }

    printf("%d", sum);
    return 0;
}
