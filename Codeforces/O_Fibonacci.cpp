//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll f(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return f(n-1)+f(n-2);
}

void solve()
{ 
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
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
