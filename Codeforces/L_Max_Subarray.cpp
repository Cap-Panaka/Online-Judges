
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

    //vector<int>hehe;

    for(int i=0;i<n;i++)
    {
        int mx=ar[i];
        for(int j=i;j<n;j++)
        {
            if(ar[j]>mx)
            {
                mx=ar[j];
            }
            cout<<mx<<' ';
        }
        

        
    }

    cout<<'\n';
    




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
