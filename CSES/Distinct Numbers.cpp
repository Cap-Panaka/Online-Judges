// https://cses.fi/problemset/task/1621
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int ar[n];
    for( i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    
    int ans=1;
    
    for(i=1;i<n;i++)
    {
        ans+=(ar[i]!=ar[i-1]);
    }
    cout<<ans<<" ";
}
