
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;

    queue<pair<int,int>> q;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push({i,x});
    }

    int ans=0;

    while(!q.empty())
    {
        pair<int,int> t=q.front();
        q.pop();

        t.second -=m;

        if(t.second>0)
        {
            q.push(t);
        }
        else
        {
            ans=t.first;
        }
    }
    cout<<ans<<endl;
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
