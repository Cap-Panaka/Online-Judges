
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
vector<ll>ar;
void solve()
{ 
    int c;
    cin>>c;
    


    if(c==0)
    {
        long long x;
        cin>>x;
        ar.push_back(x);
    }
    else if(c==1)
    {
        ll p;
        cin>>p;
        cout<<ar[p]<<endl;
    }
    else
    {
        ar.pop_back();
    }




}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    

    while(t--)
    {
        solve();
    }

    return 0;
}
