#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return (1 + countDigits(n / 10));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<countDigits(n)<<endl;
    }
    return 0;
}