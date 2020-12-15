#include <bits/stdc++.h>
using namespace std;

int realJosephus(int n, int k){
    if(n == 1){
        return 0;
    }
    return (realJosephus(n-1,k) + k) % n;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<realJosephus(n,k)<<endl;
    }
    return 0;
}