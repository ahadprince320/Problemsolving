#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);  

    for (int t = 0; t < N; t++) {
        char S[55], T[55]; 
        scanf("%s %s", S, T);

        int lenS = strlen(S);
        int lenT = strlen(T);
        int i = 0, j = 0;

        while (i < lenS && j < lenT) {
            printf("%c%c", S[i], T[j]);
            i++;
            j++;
        }

        while (i < lenS) {
            printf("%c", S[i]);
            i++;
        }

        while (j < lenT) {
            printf("%c", T[j]);
            j++;
        }

        printf("\n");
    }

    return 0;
}
