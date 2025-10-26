#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s",s);
    int val= strlen(s);
    //printf("%s",s);
    int arr[26]={0};
    for (int i = 0; i < val; i++)
    {
        arr[s[i]-'a']++;
        
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]!=0)
        {
            printf("%c - %d\n",i+'a',arr[i]);
        }
        
    }
    
     return 0;
}
