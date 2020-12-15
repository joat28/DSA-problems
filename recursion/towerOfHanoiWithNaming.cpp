#include <bits/stdc++.h>
using namespace std;
 
long long toh(int N, int from, int to, int aux) {
        // Your code here
     if(N == 1){
        cout<<"move disk 1 from rod "<< from <<" to rod " << to <<endl;
        return 1;
    }
    int moveFirst_Nminus1_Disks = toh(N - 1, from, aux , to);
    cout<<"move disk "<< N <<" from rod "<< from <<" to rod "<< to <<endl;
    int moveFirst_Nminus1_Disks_secondTime = toh(N - 1 , aux, to, from);
    //int returnValue = moveFirst_Nminus1_Disks + moveFirst_Nminus1_Disks_secondTime + 1;
    return 2*moveFirst_Nminus1_Disks + 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int moves = 0;
        int n;
        cin>>n;
        moves = toh(n,1,3,2);
        cout<<moves<<endl;
    }
}