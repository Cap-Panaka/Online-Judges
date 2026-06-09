
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,k;
    cin>>n>>k;

    vector<ll>ar(n+1);

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    while(k--)
    {
        int x;
        cin>>x;
        int L=0,R=n-1;
        bool found = false;
        while(L<=R)
        {
            int mid = L+(R-L)/2;
        

            if(ar[mid]==x)
            {
                found=true;
                break;
            }
            else if(ar[mid]<x)
            {
                L=mid+1;
            }
            else
            {
                R=mid-1;
            }
        }

        if(found)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }



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
