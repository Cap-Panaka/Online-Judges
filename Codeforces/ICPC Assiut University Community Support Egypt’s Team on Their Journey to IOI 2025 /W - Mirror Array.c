// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}
