#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
       string n;
        cin>>n;
        int sum=0;
        
        for(int i=0;i<(int)n.size();i++)
        {
            sum+=n[i]-'0';
        }
        
        if(sum==0)
        {
            return 0;
        }
        else
        {
            cout<<sum<<'\n';
        }
    }
}
