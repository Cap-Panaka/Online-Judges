
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin >> n;
    vector<int>fib(n);

    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++)
    {
        fib[i]= fib[i-1]+fib[i-2];
    }

    for(int i=0;i<n;i++)
    {
        cout<<fib[i]<<" ";
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
