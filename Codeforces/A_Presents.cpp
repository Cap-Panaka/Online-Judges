
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        ar[x]=i;
    }

    for(int i=1;i<=n;i++)
    {
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
