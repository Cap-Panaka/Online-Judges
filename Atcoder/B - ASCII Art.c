// https://atcoder.jp/contests/abc294/tasks/abc294_b

#include<stdio.h>
int main()
{
    int h,w,i,j;
    scanf("%d %d",&h,&w);
    int ar[h][w];
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            int n=ar[i][j];
            if(n==0)
            {
              printf(".") ; 
            }
            else
            {
                printf("%c",n+64) ;
            }
        }
        printf("\n");
    }
}
