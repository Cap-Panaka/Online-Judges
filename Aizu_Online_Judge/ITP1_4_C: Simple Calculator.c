//  https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C

#include<stdio.h>
int main()
{
    while(1)
    {
        int x,y,res;
        char c;
        scanf("%d %c %d",&x,&c,&y);
        if(c=='+') res=x + y;
        if(c=='-') res=x-y;
        if(c=='*') res=x*y;
        if(c=='/') res=x/y;
        if(c=='?') return 0;
        printf("%d\n",res);
        
    }
}
