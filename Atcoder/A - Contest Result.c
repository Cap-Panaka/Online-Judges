// https://atcoder.jp/contests/abc290/tasks/abc290_a

include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int total=0;
    
    for(i=0;i<m;i++)
    {
        int prob;
        scanf("%d",&prob);
        total+=ar[prob-1];
        
    }
    printf("%d\n",total);
}
