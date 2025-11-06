// https://atcoder.jp/contests/abc312/tasks/abc312_a

#include<stdio.h>
#include<string.h>
int main()
{
    char given[1001];
    scanf("%s",given);
    char s[7][4]={
        "ACE","BDF","CEG", "DFA", "EGB", "FAC", "GBD"
    };
    int flag=0;
    for(int i=0;i<7;i++)
    {
        int temp=strcmp(given,s[i]);
        if(temp==0)flag=1;
    }
    if(flag)printf("Yes\n");
    else printf("No\n");
    
}
