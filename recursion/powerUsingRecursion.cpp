#include <bits/stdc++.h>
using namespace std;


int RecursivePower(int n,int p)
{
     //cout<<n<<" "<<p<<endl;
    
    if(p == 0){
        return 1;
    }
    if(p == 1){
        return n;
    }
    //Your code here
    long long int NpowerPby2 = RecursivePower(n,p/2);
    if(p % 2 == 0){
        return NpowerPby2 * NpowerPby2;
    }
    else{
        return NpowerPby2 * RecursivePower(n,(p/2)+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int returnedValue = RecursivePower(n,p);
        cout<<returnedValue<<endl;
    }
}