// https://atcoder.jp/contests/abc322/tasks/abc322_b

#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    getchar();
    char S[n+1];
    char T[m+1];
    
    scanf("%s",S);
    scanf("%s",T);
    int prefix=1;
    for(int i=0;i<n;i++)
    {
        if(S[i]!=T[i])
        {
            prefix=0;
        }
    }
    int suffix=1;
    for(int i=0;i<n;i++)
    {
        int j=m-n+i;
        if(S[i]!=T[j])
        {
            suffix=0;
        }
    }
    
    if(suffix==1 && prefix ==1) printf("0\n");
    else if(suffix==0 && prefix==1) printf("1\n");
    else if (suffix==1 && prefix==0) printf("2\n");
    else printf("3\n");
    
}
