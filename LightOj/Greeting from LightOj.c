// https://lightoj.com/problem/greetings-from-lightoj

/*2
1 7
Case 1: 8
9 8
Case 2: 17*/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i=0;
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        
            printf("Case %d: %d\n",i+1,n+m);
            i++;
    }
}
