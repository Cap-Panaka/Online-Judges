

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool prime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) {return false;}    
        return true;
}

bool pal(int n)
{
    string s = to_string(n);
    string r=s;
    reverse(r.begin(),r.end());
    return s==r;
}


int div(int n)
{
    int count=0;
    for(int i =1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if(i!=n/i) count++;
        }
    }
    return count;
}



void solve()
{ 
    int n;
    cin>>n;
    vector<int>ar(n);

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

        
    }


    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mx<ar[i])
        {
            mx=ar[i];
        }
    }

    cout<<"The maximum number : "<<mx<<endl;


    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mn>ar[i])
        {
            mn=ar[i];
        }
    }

    cout<<"The minimum number : "<<mn<<endl;


    int primeCount = 0;
    int palCount = 0;

    int bestNum = ar[0];
    int bestDiv = div(ar[0]);

for(int i = 0; i < n; i++)
{
    if(prime(ar[i]))
        primeCount++;

    if(pal(ar[i]))
        palCount++;

    int d = div(ar[i]);

    if(d > bestDiv)
    {
        bestDiv = d;
        bestNum = ar[i];
    }
    else if(d == bestDiv && ar[i] > bestNum)
    {
        bestNum = ar[i];
    }
}

cout << "The number of prime numbers : " << primeCount << endl;
cout << "The number of palindrome numbers : " << palCount << endl;
cout << "The number that has the maximum number of divisors : " << bestNum << endl;


   

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
