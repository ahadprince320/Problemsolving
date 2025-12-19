#include<stdio.h>
#include<string.h>
int main(){
    char S[100001];
    scanf("%s",S);
    //printf("%s",N);
    int val=strlen(S);
    //printf("%d \n",val);
    int result=0;
    char vawel[5]={'a','e','i','o','u'};

   // printf ("%d\n ",vawel);
    for (int i = 0; i < val; i++)
    {
       for (int j = 0; j < 5; j++)
       {
         if (S[i]==vawel[j])
        {
           result++;
           break;
        }
       }
       
       
    }
    int myvalue=val-result;

        printf("%d",myvalue);
    
    return 0;
}
