// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sec=n%60;
    int min=(n/60)%60;
    int hour=(n/60)/60;
    cout<<hour<<":"<<min<<":"<<sec<<"\n";
}
