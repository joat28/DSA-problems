// find the length of longest repeating subsequence, given a string

#include <bits/stdc++.h>
using namespace std;

int lcsLength(string s1, string s2, int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // initialize dp vector(m+1 x n+1) to 0;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {

            // the only diff in this and standard solution is that the characters must be the same, but not at the same location.
            if ((s1[i - 1] == s2[j - 1]) && ((i - 1) != (j - 1)))
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string s1;
    cin >> s1;
    int n = s1.length();
    cout << lcsLength(s1, s1, n, n) << endl;
    return 0;
}
