//https://atcoder.jp/contests/abc155/tasks/abc155_c

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>vote;
    int n;
    cin>>n;
    string name;
    int max_vote=0;
    for(int i=0;i<n;i++)
    {
        cin>>name;
        vote[name]++;
        max_vote=max(max_vote,vote[name]);
    }
    vector<string>res;
    for(auto data:vote)
    {
        if(data.second==max_vote)
        {
            res.push_back(data.first);
        }
    }
    for(auto s:res) cout<<s<<endl;
}
