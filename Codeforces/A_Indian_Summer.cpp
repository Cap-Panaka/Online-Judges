
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n;
   cin>>n;
   vector<pair<string,string>>ar(n);
   for(int i=0;i<n;i++)
   {
    string s1,s2;
    cin>>s1>>s2;
    ar[i] = {s1, s2};
   }
   sort(ar.begin(),ar.end());
   ar.erase(unique(ar.begin(),ar.end()),ar.end());

    cout<<ar.size();


    
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
