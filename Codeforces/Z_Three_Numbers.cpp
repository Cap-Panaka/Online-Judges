// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int k,s;
    cin>>k>>s;
    int count = 0;
    for(int i=0; i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            int hehe = s-(i+j);
            if(hehe>=0 && hehe<=k)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
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
