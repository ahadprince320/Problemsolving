#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char S[10005];
        scanf("%s", S);

        int value [3]={0};

        for (int i = 0; i < strlen(S); i++) {
            if (S[i] >= 'A' && S[i] <= 'Z')
                value[0]++;
            else if (S[i] >= 'a' && S[i] <= 'z')
                value[1]++;
            else if (S[i] >= '0' && S[i] <= '9')
                 value[2]++;
        }

        printf("%d %d %d\n", value[0], value[1], value[2]);
    }

    return 0;
}
