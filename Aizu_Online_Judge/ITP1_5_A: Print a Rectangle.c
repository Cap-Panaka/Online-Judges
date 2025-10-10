// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A

#include<stdio.h>
int main()
{
   
    while(1)
    {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    if(n==0 && m==0) return 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    }
}
