#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n, int &counter) {
    // add code here
    if(n < counter){
        return true;
    }
    if(n % counter == 0 ){
        return false;
    }
    n = n - n/counter;
    ++counter;
    return isLucky(n, counter);
}

int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       int counter = 2;
       cin>>n;
       cout<<isLucky(n, counter)<<endl;
   }
   return 0;
}