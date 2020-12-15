#include <bits/stdc++.h>
using namespace std;

string getString(int a){
    if(a == 2){
        return "abc";
    }
    if(a == 3){
        return "def";
    }
    if(a == 4){
        return "ghi";
    }
    if(a == 5){
        return "jkl";
    }
    if(a == 6){
        return "mno";
    }
    if(a == 7){
        return "pqrs";
    }
    if(a == 8){
        return "tuv";
    }
    if(a == 9){
        return "wxyz";
    }
}

vector <string> possibleWords(int a[],int N)
{
    
     if( N == 1){
        vector <string> temp;
        string GetString = getString(a[0]);
        for(int i = 0; i <GetString.size(); ++i){
        	string newTemp;
        	newTemp.push_back(GetString[i]);
        	temp.push_back(newTemp);
        }
        return temp;
    }

    vector <string> possibleWordsForSplus1 = possibleWords(a+1, N-1);
    vector <string> returnString;
    for(string str: possibleWordsForSplus1){
        string GetString = getString(a[0]);
        for(int i = 0; i <GetString.size(); ++i){
        	string newTemp = GetString[i] + str;
        	returnString.push_back(newTemp);
        }
    }
    sort(returnString.begin(), returnString.end());
    return returnString;
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        vector <string> res = possibleWords(a, n);
        for(string i :  res){
            cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}