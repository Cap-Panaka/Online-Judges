#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int g;
    cin >> g;

    for(int i = 1; i < n; i++)
    {
        int x;
        cin >> x;

        g = __gcd(g, x);
    }

    cout << g << '\n';
}