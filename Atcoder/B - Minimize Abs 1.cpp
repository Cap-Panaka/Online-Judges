// https://atcoder.jp/contests/abc330/tasks/abc330_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]<l) cout<<l<<' ';
        else if(ar[i]<=r && ar[i] >=l) cout<<ar[i]<<' ';
        else cout<<r<<' ';
        
    }
    // cout<<'\n';
}
