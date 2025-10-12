// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    scanf("%s",s1);
    
    char s2[1001];
    
    int len=strlen(s1);
    for(int i=0;i<len;i++)
    {
        int j=len-1-i;
        s2[i]=s1[j];
    }
    
    s2[len]='\0';
    bool equal=1;
    for(int i=0;i<len;i++)
    {
        if(s1[i]!=s2[i])
        {
            equal=0;
        }
    }
    if(equal)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}
