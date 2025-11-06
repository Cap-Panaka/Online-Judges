// https://codeforces.com/problemset/problem/144/A

#include<bits/stdc++.h>
using namespace std;
int ar[1001];
int n;
int max_idx()
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[max])
        {
            max=i;
        }
    }
    return max;
}
int min_idx()
{
    int min=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]<=ar[min])
        {
            min=i;
        }
    }
    return min;
}



int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int max=max_idx();
    int min=min_idx();
    int res=max+(n-min-1);
    if(max>min) res--;
    printf("%d\n",res);
}
