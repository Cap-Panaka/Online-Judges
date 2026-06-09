
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    stack<int> n;

    string s;
    while(cin>>s)
    {
        if(s=="push")
        {
            int x;
            cin>>x;
            n.push(x);
            cout<<"ok"<<endl;
        }
        else if(s=="back")
        {
            cout<<n.top()<<endl;
        }
        else if(s=="size")
        {
            cout<<n.size()<<endl;
        }
        else if(s=="pop")
        {
            cout<<n.top()<<endl;
            n.pop();
        }
        else if(s=="clear")
        {
            while(!n.empty())
            {
                n.pop();
            }
            cout<<"ok"<<endl;
        }
        else if(s=="exit")
        {
            cout<<"bye"<<endl;
            break;
        }

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
