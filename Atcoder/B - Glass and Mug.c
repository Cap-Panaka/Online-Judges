// https://atcoder.jp/contests/abc332/tasks/abc332_b

#include<stdio.h>
int main() 
{
    int k,g,m;
    
    scanf("%d %d %d",&k,&g,&m);
    int x=0,y=0;
    for(int i=1;i<=k;i++)
    {
        if(x==g)
        {
            x=0;
        }
        else if(y==0)
        {
            y=m;
        }
        else
        {
            int capacity=g-x;
            if(capacity >=y)
            {
             x+=y;
             y=0;
            }
            else 
            {
                y-=capacity;
                x=g;
            }
        }
    }
    printf("%d %d",x,y);

}
/*

1.if glass=full -->discard
2.mug empty --> fill mug
3. mug-->glass


K=5 G=300 M=500
here,
K=1, G=Empty ,M=500
K=2, G=300, M=200
K=3,G=0(fele dilam),M=200
K=4,G=200,M=0(transferred)
K=5,G=200,M=500

x        y
G-x     
*/



