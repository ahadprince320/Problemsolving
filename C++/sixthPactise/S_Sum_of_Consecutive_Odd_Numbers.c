#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for (int i = 1; i <=T; i++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        int val=0;
        
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        //printf("%d %d \n",X,Y);
        for (int j = X+1; j<Y; j++)
        {
          if (j%2!=0)
          {
           val+=j;
           
          }
        
        }

           printf("%d\n",val);
        
    }
    
     return 0;
}
