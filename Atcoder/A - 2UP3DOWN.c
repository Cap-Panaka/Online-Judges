// https://atcoder.jp/contests/abc326/tasks/abc326_a

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if( b-a==1 || b-a==2 || a-b==1 || a-b==2 || a-b==3)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}  
