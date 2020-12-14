#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    if (N == 0)
        return;
    printNos(N - 1);
    cout << N << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printNos(n);
    }
    return 0;
}
