
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void f(int n)
{
    if(n==0) return ;
     
     if(n>1)cout<<n<<' ';
     else cout<<n;
     f(n-1);

}

void solve()
{ 
    int n;
    cin>>n;
    f(n);
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
