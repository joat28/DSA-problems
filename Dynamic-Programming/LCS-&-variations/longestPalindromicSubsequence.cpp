// Given a string find the length of longest palindromic subsequence of the string

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

int LPS(string s)
{

    // Reverse the string and find out the LCS of the reversed and the original string
    int len = s.length();
    string original = s;
    reverse(s.begin(), s.end());
    string reversed = s;
    return lcsLength(original, reversed, len, len);
}

int main()
{

    string s1;
    cin >> s1;
    cout << LPS(s1) << endl;

    return 0;
}
