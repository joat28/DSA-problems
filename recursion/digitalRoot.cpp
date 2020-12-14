#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int count = 0;
    while (n)
    {
        count += n % 10;
        n = n / 10;
    }
    return count;
}
int digitalRoot(int n)
{
    long long int sumOfDigs = sumOfDigits(n);
    if (sumOfDigs < 10)
    {
        return sumOfDigits(n);
    }
    return digitalRoot(sumOfDigs);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << digitalRoot(n);
    }
    return 0;
}