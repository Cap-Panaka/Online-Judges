//https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[1001];
	scanf("%s",s);
	int n=strlen(s);
	int i,j;
	char temp[1001];
	for(i=0,j=0;i<n;i+=2,j++)
	{
	    temp[j]=s[i];
	}
	n=j;
	sort(temp,temp+n);
	printf("%c",temp[0]);
	for(i=1;i<n;i++)
	{
	    printf("+%c",temp[i]);
	}

}
