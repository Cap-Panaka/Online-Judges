// https://codeforces.com/contest/1352/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                count++;
            }
        }
        
        cout<<count<<'\n';
        
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            { 
                printf("%c",s[i]);
                int zero=s.size()-1-i;
                for(int j=0;j<zero;j++)
                {
                    cout<<"0";
                }
                cout<<" ";
                
            }
        }
        cout<<"\n";
    }
}
