
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n;
   cin>>n;
   vector<string> a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   } 


   int count =1;
   for(int i=0;i<n-1;i++)
   {
    if(a[i]!=a[i+1])
    {
        count++;
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
