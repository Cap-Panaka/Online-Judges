// https://codeforces.com/contest/1901/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        
        vector<long long>ar(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        
        sort(ar.begin(),ar.end());
        
        long long  max = ar[0];
        long long hehe = 2*(x - ar[n-1]) ;
        
        for(int i=1;i<n;i++)
        {
            if(max<ar[i]-ar[i-1])
            {
                max = ar[i]-ar[i-1];
            }
            
            
        }
        
        if(max<hehe)
            {
                max=hehe;
            }
        
        cout<<max<<endl;
    }
}
