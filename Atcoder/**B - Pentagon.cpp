//  https://atcoder.jp/contests/abc333/tasks/abc333_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1,s2,t1,t2,temp;
    cin>>s1>>s2>>t1>>t2;
    int diff1=abs(s1-s2);
    if(diff1>2)  diff1=5-diff1;
    
    int diff2=abs(t1-t2);
    if(diff2>2) diff2=5-diff2;
    
    if(diff1==diff2) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    
}

/*  
       A
     /   \
   E       B
   |       |
   D-------C
*/
