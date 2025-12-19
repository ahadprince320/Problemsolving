#include <stdio.h>

int main() {
    int numb;
    scanf("%d", &numb);

    for (int i = 1; i <= numb; i++) {
        
        for (int j = 1; j <= numb - i; j++) {
            printf(" ");
        }

        for (int var = i; var >= 1; var--) {
            printf("%d", var);
        }

        printf("\n");
    }

    return 0;
}
