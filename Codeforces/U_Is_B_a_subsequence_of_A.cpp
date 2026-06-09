
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;
    vector<int>ar1(n+1),ar2(m+1);

    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }


    
    

    bool flag = false;

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(ar1[i]==ar2[j])
        {
            j++;
        }

        if(j==m)
        {
            flag=true;
            break;
        }
    }


    if(flag)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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
