// https://codeforces.com/contest/1850/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int max_quality=INT_MIN;   //in c header file will be <limits.h>
        int response_number=0;
        for(i=1;i<=n;i++)
        {
            int length,quality;
            cin>>length>>quality;
            if(length>10) {continue;}
            if(quality>max_quality){
            max_quality=quality;
            response_number=i;}
        }
        cout<<response_number<<'\n';
    }
    
}
