#include <bits/stdc++.h>
using namespace std;


int lcsLength(string s1, string s2, int m, int n){
    if(m == 0 || n == 0) return 0;
    else {
        if(s1[m-1] == s2 [n-1]){
            return 1 + lcsLength(s1, s2, m - 1, n - 1);
        }
        else{
            return max(lcsLength(s1, s2, m - 1, n), lcsLength(s1, s2, m, n - 1));
        }
    }
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length();
    int n = s2.length();
    cout << lcsLength(s1, s2, m, n) << endl;
    return 0;
}
