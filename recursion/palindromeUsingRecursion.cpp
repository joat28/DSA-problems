//  Author- Prabhat Rao
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define MOD 1000000007
#define fo(i,n) for(ll i=0;i<n;++i)
#define max3(a,b,c) max(a,max(b,c));
typedef vector <ll>  vi;
typedef vector <vector<ll>> vvi;
const int N=3e5;

 
bool palindromeChecker(string str){
 
	int los = str.size();
	//cout<<sub<<los<<endl;
	if(los == 0 || los == 1){
		return true;
	}
	if(str[0] != str[los-1]){
		return false;
	}
	string sub = str.substr(1,los-2);
	return (palindromeChecker(sub));
}
int main()
{
 
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<palindromeChecker(s)<<endl;
	}
    return 0;
}