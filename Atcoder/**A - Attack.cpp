// https://atcoder.jp/contests/abc302/tasks/abc302_a?lang=en

#include<stdio.h>
int main()
{
    //A-x*B<=0
    // x*B>=A
    // x>=A/B
    // 5.1 -> 6
	// 5.1 -> 5
	// 27 + 4 / 5 = 6
    
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",(a+b-1)/b);
}
