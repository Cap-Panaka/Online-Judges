
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //unique(ar.begin(), ar.end());

    for(int i=n-1;i>=0;i--)
    {
        if((i+1) % 2 != 0)
        cout<<ar[i]<<" ";
    }


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
