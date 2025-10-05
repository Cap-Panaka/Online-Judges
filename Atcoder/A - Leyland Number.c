// https://atcoder.jp/contests/abc320/tasks/abc320_a?lang=en

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=pow(b,a);
    int d=pow(a,b);
    printf("%d", c+d);
}
