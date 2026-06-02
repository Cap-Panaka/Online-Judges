
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin >> n;
    
    int counter =0;

    while(n>0)
    {
        if(n%2==1)
        {
            counter++;
        }
        n=n/2;

    }

    //cout << counter << endl;

    int ans = 0;

    for(int i =0; i<counter; i++)
    {
        ans += pow(2,i);
    }
    cout << ans << endl;
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
