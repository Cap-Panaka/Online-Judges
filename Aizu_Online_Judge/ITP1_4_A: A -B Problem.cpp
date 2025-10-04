//  https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d %.5lf",a/b,a%b,(double)a/b);
}
