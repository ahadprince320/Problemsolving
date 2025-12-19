#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11]; 
    
    scanf("%s", A);
    scanf("%s", B);

    printf("%d %d\n", (int)strlen(A), (int)strlen(B));

    char AB[21]; 
    strcpy(AB, A); 
    strcat(AB, B); 
    printf("%s\n", AB);

    char tempA[11], tempB[11];
    strcpy(tempA, A);
    strcpy(tempB, B);

    char t = tempA[0];
    tempA[0] = tempB[0];
    tempB[0] = t;

    printf("%s %s\n", tempA, tempB);

    return 0;
}
