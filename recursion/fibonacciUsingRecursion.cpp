#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n)
{
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibonacci(n);
    }
    return 0;
}

