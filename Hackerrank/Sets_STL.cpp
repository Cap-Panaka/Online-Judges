
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

set<int>s;

void solve()
{ 
    int n;
    while(cin>>n)
    {
        int x;
            cin>>x;
        if(n==1)
        {
            
            s.insert(x);
            
        }

        else if(n==2)
        {
            
            
            s.erase(x);
        }
        else
        {
            if (s.find(x) != s.end())

                cout << "Yes\n";
                
            else
            {
                cout << "No\n";


            }

        }


    }
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
