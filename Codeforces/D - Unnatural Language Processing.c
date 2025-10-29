#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    
    char ar[n+1];
    scanf("%s",ar);
    
    char ar1[n+1];
    for(int i=0;i<n;i++)
    {
        if(ar[i]=='a' || ar[i]=='e')
        {
            ar1[i]='V';
        }
        else 
        {
            ar1[i]='C';
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(i+2==n)
        {
         printf("%c%c",ar[i],ar[i+1]);
         break;
        }
        else if(i+2==n-1)
        {
            printf("%c%c%c",ar[i],ar[i+1],ar[i+2]);
            break;
        }
        if(ar1[i+3]=='V')
        {
            printf("%c%c.",ar[i],ar[i+1]);
            i++;
        }
        else
        {
            printf("%c%c%c.",ar[i],ar[i+1],ar[i+2]);
            i+=2;
        }
    }
    printf("\n");
    }
}




//https://codeforces.com/contest/1915/problem/D

