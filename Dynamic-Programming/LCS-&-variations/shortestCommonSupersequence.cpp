// Given 2 strings, find the shortest common supersequence
// Supersequence - is the one whose subsequences are the string.


#include <bits/stdc++.h>
using namespace std;

int lcsLength(string s1, string s2, int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // initialize dp vector(m+1 x n+1) to 0;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
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

int shortestCommonSupersequence(string s1, string s2)
{

    // One common answer can be s1+s2
    // we remove the lcs from these, we get SCS

    int m = s1.length();
    int n = s2.length();
    int lcsOfStrings = lcsLength(s1, s2, m, n);
    
    return (m + n - lcsOfStrings);
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    cout << shortestCommonSupersequence(s1, s2) << endl;
    return 0;
}