#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n < 10)
        return n;
    return (n % 10 + sumOfDigits(n / 10));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sumOfDigits(n);
    }
    return 0;
}
