https://codeforces.com/problemset/problem/1742/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=8;
        char ans='B';
        while(n--)
        {
            vector<char>temp(8);
            int count=0;
            for(int i=0;i<8;i++)
            {
                cin>>temp[i];
                count+=(temp[i]=='R');
            }
            if(count==8)ans='R';
        }
        cout<<ans<<'\n';
        
    }
}
