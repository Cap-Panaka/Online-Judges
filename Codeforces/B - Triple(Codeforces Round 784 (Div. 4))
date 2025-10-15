// https://codeforces.com/contest/1669/problem/B

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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        int Freq[n+1];
        for(int i=1;i<=n;i++)
        {
            Freq[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            Freq[ar[i]]++;
        }
        int count=-1;
        for(int i=1;i<=n;i++)
        {
            if(Freq[i]>=3)
            {
                count=i;
                break;
            }
            
        }
    cout<<count<<'\n';
    }
    return 0;
}
