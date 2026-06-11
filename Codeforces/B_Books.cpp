
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,target;
    cin>>n>>target;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    //int r=0;
    
    int ans=0;
    int l=0;
    ll sum=0;
    for(int r=0;r<n;r++)
    {
        sum+=ar[r];

        while(sum>target)
        {
            sum-=ar[l];
            l++;
        }

        ans=max(ans,r-l+1);
    }

    cout<<ans<<'\n';


    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   // int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
