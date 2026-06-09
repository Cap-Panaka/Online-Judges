
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
  int n;
  cin>>n;

  unordered_map<int , long long>freq;
  long long p=0;

  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    p+=freq[x];
    freq[x]++;
  }  

  long long total = 1LL*n*(n-1)/2 ;
  cout<<total - p <<endl;
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
