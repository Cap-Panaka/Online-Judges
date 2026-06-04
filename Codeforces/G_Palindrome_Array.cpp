
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n;
   cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    //int j=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=ar[n-1-i]){
            cout<<"NO"<<endl;
            return;
        }
        
    }
    cout<<"YES"<<endl;
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
