#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

double mul(double number, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }

    return ans;
}
double findNthRootOfM(int n, long long m)
{
    double low = 1;
    double high = m;

    double eps = 1e-7;

    while ((high - low) > eps)
    {
        double mid = (high + low) / 2.0;

        if (mul(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    return high;
}
