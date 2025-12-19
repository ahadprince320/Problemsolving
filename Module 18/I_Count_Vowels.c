#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char *s, int idx) {
    if (s[idx] == '\0')  
        return 0;

    char c = tolower(s[idx]);
    int isVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

    return isVowel + countVowels(s, idx + 1); 
}

int main() {
    char S[205];
    fgets(S, sizeof(S), stdin);  
    int result = countVowels(S, 0);
    printf("%d\n", result);

    return 0;
}
