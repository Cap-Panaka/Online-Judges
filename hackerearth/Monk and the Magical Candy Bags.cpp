#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long>candy_bag;
        for(int i=0;i<n;i++)
        {
            long long candy;
            cin>>candy;
            candy_bag.insert(candy);
        }
        
        long long total=0;
        for(int i=0;i<k;i++)
        {
            auto last=(--candy_bag.end());
            long long candy=*last;
            total+=candy;
            candy_bag.erase(last);
            candy_bag.insert(candy/2);
            
        }
        cout<<total<<endl;
    }
}
