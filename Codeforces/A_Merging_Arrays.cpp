
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;
    vector<ll>ar1(n),ar2(m);

    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
        
    }


    int i=0,j=0;

    while(i<n && j<m)
    {
        if(ar1[i]<=ar2[j])
        {
            cout<<ar1[i]<< " ";
            i++;
        }
        else
        {
            cout<<ar2[j]<< " ";
            j++;
        }
    }
   
    while(i<n)
    {
        cout<<ar1[i]<<" ";
        i++;
    }

    while(j<m)
    {
        cout<<ar2[j]<<" ";
        j++;
    }

    cout<<endl;

    return ;

   

    


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
