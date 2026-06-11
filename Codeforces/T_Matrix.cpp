
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }

    int p=0,sum=0;

    for(int i=0;i<n;i++)
    {
        
            sum+=ar[i][i];
            sum-=ar[i][n-1-i];

        
    }



     
   cout<<abs(sum)<<endl;





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
