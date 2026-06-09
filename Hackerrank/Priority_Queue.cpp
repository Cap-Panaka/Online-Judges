
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    priority_queue<int> q;
    string s;
    while(cin>>s)
    {
        if(s=="insert")
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else if(s=="extract")
        {
            cout<<q.top()<<endl;
            q.pop();
        }
        else if(s=="end")
        {
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
