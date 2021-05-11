// Find the minimum insertions and deletions to convert s1 to s2;

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

int minID(string s1, string s2){

    int m = s1.length();
    int n = s2.length();
    int lcsOfStrings = lcsLength(s1, s2, m, n);
    // No of extra elements in s1 = m - lcs -> remove these -> deletions
    // No of extra elements in s2 = n - lcs -> add these -> insertions
    return (m + n - (2 * lcsOfStrings));
}

int main(){

    string s1, s2;
    cin >> s1 >> s2;
    cout << minID(s1, s2) << endl;
    return 0;
}