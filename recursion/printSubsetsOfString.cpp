//  Author- Prabhat Rao
 
#include <bits/stdc++.h>
using namespace std;
 
//template==================================================================
#define ll long long int
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define MOD 1000000007
#define fo(i,n) for(ll i=0;i<n;++i)
#define max3(a,b,c) max(a,max(b,c));
typedef vector <ll>  vi;
typedef vector <vector<ll>> vvi;
const int N=3e5;
//===========================================================================
void printSubs(string str, string curr= "", int index = 0){
	if(index == str.length()){
		cout<<curr<<" "; 
		return;
	}
	printSubs(str, curr, index + 1);
	printSubs(str, curr + str[index] , index + 1);
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		printSubs(s);
	}
    return 0;
}