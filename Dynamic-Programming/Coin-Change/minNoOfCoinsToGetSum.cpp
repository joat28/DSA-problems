// Given a sum, and certain denominations of coins, find the minimum no of coins to the sum (value of the coins don't matter, only the number)

#include <bits/stdc++.h>
using namespace std;

int coinChange_minWays(int *coins, int n, int sum)
{

    //create dp array with size sum+1
    vector<int> dp(sum + 1);
    for (int i = 0; i <= sum; ++i)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= sum; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i - coins[j] >= 0)
            {
                int sub_res = dp[i - coins[j]];
                if (sub_res != INT_MAX)
                {
                    dp[i] = min(dp[i], sub_res + 1);
                }
            }
        }
    }
    return dp[sum];
}

int main()
{
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n;++i){
        cin >> coins[i];
    }
    int sum;
    cin >> sum;
    cout << coinChange_minWays(coins, n, sum);
    return 0;
}
