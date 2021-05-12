//Given two strings A and B, you can do three possible operations (each mean 1 operation):
// 1. Delete a char from A
// 2. Insert a char in A
// 3. Replace a char in A.
// find the min no of conversions to convert A to B.

#include <bits/stdc++.h>
using namespace std;
int editDistance(string a, string b, int n, int m){
    int dp[n + 1][m + 1];
    
    //if n == 0 then ans = m
    //if m == 0 then ans = n
    for (int i = 0; i <= n;++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if(a[i-1] == b[i-1]){
                dp[i][j] = dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
            }
        }
    }
    return dp[n][m];
}

int main()
{

    string s1, s2;
    cout << editDistance(s1, s2, s1.length(), s2.length());

    return 0;
}