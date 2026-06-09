
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    map<string, int>freq;
   // int champ=0;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        freq[s]++;
    }

    int champ=0;

    for(map<string,int>::iterator it = freq.begin();it!=freq.end();it++)
    {
        if(it->second > champ)
        {
            champ=it->second;
        }
    }

    cout<<champ<<'\n';

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
