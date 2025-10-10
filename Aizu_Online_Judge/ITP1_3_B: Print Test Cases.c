// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B

#include<stdio.h>
int main()
{
    
    int t;
    scanf("%d",&t);
    int i=0;
    while(1)
    {
        if(t==0)
        {
            return 0;
        }
       
        printf("Case %d: %d\n",i+1,t);
        t=0;
        i++;
        scanf("%d",&t);
    }
}
