
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;

    vector<tuple<int, int, char>>ar;

    int bal=0;

    for(int i=0;i<(int)s.size();i++)
    {
        ar.push_back({bal, -i, s[i]});
        if(s[i]=='(')
        {
            bal++;
        }
        else
        {
            bal--;
        }
    }


        sort(ar.begin(),ar.end());

        for(int i=0;i<(int)s.size();i++)
        {
            cout<<get<2>(ar[i]);
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
