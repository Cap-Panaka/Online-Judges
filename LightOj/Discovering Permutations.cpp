// https://lightoj.com/problem/discovering-permutations#google_vignette

#include <bits/stdc++.h>
using namespace std;


    int main()
    {
        int t;
        cin>>t;
        int case_no=1;
        while(t--)
        {
        int n,k;
        cin>>n>>k;
        string s="";
        
        for(int i=0;i<n;i++)
        {
            s+='A'+i;
        }
        
        //cout<<s<<endl;
        
        //int count=0;
        cout<<"Case "<<case_no++<<":\n";
        do
        {
            cout<<s<<endl;
            //count++;
           // k--;
        }
        
        while(--k && next_permutation(s.begin(),s.end()));
        }
    }
