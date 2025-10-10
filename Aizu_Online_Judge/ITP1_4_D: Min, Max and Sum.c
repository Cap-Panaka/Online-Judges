// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long sum=0;
    int min=1000000;
    int max=-1000000;
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        
        sum+=x;
        if(x<min)
        {
            min=x;
        }
        if(x>max)
        {
            max=x;
        }
    }
    
    printf("%d %d %lld",min,max,sum);
    
}
