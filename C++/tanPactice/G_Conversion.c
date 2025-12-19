#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char S[100001];
    scanf("%s", S);

    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        if (S[i] == ',') {
            S[i] = ' '; 
        } 
        else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = toupper(S[i]); 
        } 
        else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = tolower(S[i]); 
        }
    }

    printf("%s", S); 

    return 0;
}
