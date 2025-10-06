// https://atcoder.jp/contests/abc304/tasks/abc304_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
   // if(n==0) cout<<'0'<<'\n';
    if(n<1000) cout<<n<<'\n';
    else if(n<10000) cout<<(n/10)*10 <<'\n'  ;
    else if(n<100000) cout<<(n/100)*100<<'\n';
    else if(n<1000000) cout<<(n/1000)*1000<<'\n';
    else if(n<10000000) cout<<(n/10000)*10000<<'\n';
    else if(n<100000000) cout<<(n/100000)*100000<<'\n';
    else cout<<(n/1000000)*1000000<<'\n';
    
    
}


/*
    10)2341(234
       20
       ---
        34
        30
        ----
         41
         40
         ---
          1
    */
