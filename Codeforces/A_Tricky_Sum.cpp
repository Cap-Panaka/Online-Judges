//https://codeforces.com/problemset/problem/598/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   ll n;
   cin>>n;
    ll sum = n*(n+1)/2;
    for(ll i =1;i<=n;i*=2)
    {
        sum-=2*i;
    }
    cout<<sum<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
