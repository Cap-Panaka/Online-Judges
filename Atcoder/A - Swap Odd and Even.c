// https://atcoder.jp/contests/abc293/tasks/abc293_a

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i+=2)
    {
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    printf("%s\n",s);
}
