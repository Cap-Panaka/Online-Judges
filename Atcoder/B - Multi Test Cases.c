// https://atcoder.jp/contests/abc284/tasks/abc284_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]%2!=0)
            {
                count++;
            }
        }
        cout<<count<<'\n';
        
    }
}


/*
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n; 
        scanf("%d",&n);
        int i,ar[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]%2!=0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
 */
