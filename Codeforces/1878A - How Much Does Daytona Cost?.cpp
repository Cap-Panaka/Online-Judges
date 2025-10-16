//  https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,k;
        cin>>n>>k;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            if(ar[i]==k)
            {
                flag=0;
            }
        }
        
        if(flag==0)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}
