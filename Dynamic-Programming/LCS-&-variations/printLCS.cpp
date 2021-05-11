//Given two string, print the longest common subsequence

#include <bits/stdc++.h>
using namespace std;

void printLCS(string s1, string s2, int m, int n)
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

    int index = dp[m][n];
    if (index == 0)
    {
        cout << " " << endl;
        return;
    }
    char lcs[index + 1] = {'\0'};
    for (int i = m; i > 0;)
    {
        for (int j = n; j > 0;)
        {
            if (i == 0 || j == 0)
            {
                break;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                lcs[index] = s1[i - 1];
                i--;
                j--;
                index--;
            }
            else
            {
                if (dp[i - 1][j] > dp[i][j - 1])
                {
                    i--;
                }
                else
                {
                    j--;
                }
            }
        }
    }
    for (int i = 0; i <= index; ++i)
    {
        cout << lcs[i];
    }
    return;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length();
    int n = s2.length();
    printLCS(s1, s2, m, n);

    return 0;
}