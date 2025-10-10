// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C
#include <stdio.h>
int main() 
{
    while(1)
    {
    
    
    int x,y;
    scanf("%d %d",&x,&y);
    
    if(x==0 && y==0)
    {
        return 0;   //break;
    }
    
    
    if(x<y)
    {
        printf("%d %d\n",x,y);
    }
    else
    {
        printf("%d %d\n",y,x);
    }
    }
}

//Ascending order= small --> big
//decending order= big---> small
