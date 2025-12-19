#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        char S[101]; 
        scanf("%s", S);

        int len = strlen(S);

        if (len > 10) {
            
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        } else {
            printf("%s\n", S);
        }
    }

    return 0;
}
