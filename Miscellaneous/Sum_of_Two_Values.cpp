
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,target;
    cin>>n>>target;

    vector<pair<ll,int>>ar(n);

    for(int i=0;i<n;i++)
    {
        cin>>ar[i].first;
        ar[i].second=i+1;
    }


    sort(ar.begin(),ar.end());

    int l=0, r=n-1;

    while(l<r)
    {
        ll sum = ar[l].first+ ar[r].first;

        if(sum==target){
            cout<<ar[r].second<<" "<<ar[l].second<<'\n';
            return;
        }

        else if(sum<target)
        {
            l++;
        }
        else
        {
            r--;
        }

    }
    cout<< "IMPOSSIBLE"<<'\n';
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
