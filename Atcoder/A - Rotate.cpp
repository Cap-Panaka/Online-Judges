// https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en

#include<stdio.h>
int main()
{
    char a,b,c;
    scanf("%c%c%c", &a, &b, &c);
    int abc=(a-'0')*100 + (b-'0')*10 + (c-'0');
    int bca=(b-'0')*100 + (c-'0')*10 + (a-'0');
    int cab=(c-'0')*100 + (a-'0')*10 + (b-'0');
    
    printf("%d\n",abc+bca+cab);
}






/*   XXX

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int num1=a*100+b*10+c ;
    int num2=b*100+c*10+a ;
    int num3=c*100+a*10+b  ;
    cout<<num1+num2+num3<<"\n";
} It just take input like 9 9 9 not 999 */
