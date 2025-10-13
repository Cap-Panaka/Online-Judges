//   https://atcoder.jp/contests/abc236/tasks/abc236_b

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int count[n+1];
    for(int i=1;i<=n;i++)
    {
        count[i]=0;
    }
    
    for(int i =0;i<n*4-1;i++)
    {
        int x;
        scanf("%d",&x);
        count[x]++;
    }
    
    int ans ;
    {
        for(int i=1;i<=n;i++)
        {
            if(count[i]==3) ans=i;
            
        }
        
    }
    printf("%d\n",ans);
}
