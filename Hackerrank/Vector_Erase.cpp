
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<ll>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int k;
    cin>>k;
    int s,e;
    cin>>s>>e;
    s--;
    e--;
    ar.erase(ar.begin()+s,ar.begin()+e+1);

    cout<<ar.size()<<endl;
    for(int i=0;i<(int)ar.size();i++)
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
