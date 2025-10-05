// https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", (int)pow(a,b));
}


/* #include<stdio.h>
int hehe(int base,int power)
{
    if(base==0) return 0;
    if(power==0) return 1;
    return base*hehe(base,power-1);
}
int main() 
{
    int b,p;
    scanf("%d %d",&b,&p);
    printf("%d",hehe(b,p));
} */
