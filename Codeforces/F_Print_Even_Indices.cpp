
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void f(vector<int>& ar, int n)
{
    if(n<0) return ;
    if(n%2==0)
    {
        cout<<ar[n]<< " ";
    }


    f(ar,n-1);

}


void solve()
{ 
  int n;
  cin>>n;
 vector<int>ar(n);
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];

 }
    f(ar,n-1);
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
