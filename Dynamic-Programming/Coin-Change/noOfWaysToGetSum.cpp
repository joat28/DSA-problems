// Given a sum, and certain denominations of coins, each with infinite supply, find the no of ways to get the sum from the coins

#include <bits/stdc++.h>
using namespace std;

int coinChange_NoOfWays(int *coins, int n, int sum)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - coins[i - 1] >= 0)
            {
                dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[n][sum];
}
int main()
{
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }
    int sum;
    cin >> sum;
    cout << coinChange_NoOfWays(coins, n, sum) << endl;
    return 0;
}
