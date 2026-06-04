
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll f(int n)
{
    if(n==1) return 1;
   return n*f(n-1);
   // f(n-1);

}

void solve()
{ 
    int n;
    cin>>n;
    cout<<f(n);
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
