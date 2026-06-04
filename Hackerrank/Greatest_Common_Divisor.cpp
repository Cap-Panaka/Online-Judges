//https://csacademy.com/contest/archive/task/gcd/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);


}


void solve()
{ 
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
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




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int gcd(int a, int b)
{
    if(b == 0) return a;

    return gcd(b, a % b);
}


void solve()
{ 
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
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

