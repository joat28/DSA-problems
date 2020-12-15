#include <bits/stdc++.h>
using namespace std;


vector <string> powerSet(string s)
{
    if(s.size() == 0){
        vector <string> temp;
        temp.push_back("");
        return temp;
    }
    
   //Your code here
   string sub = s.substr(1);
   vector <string> returnSet;
   vector <string> powerSubsetSPlus1 = powerSet(sub);
   for(string str : powerSubsetSPlus1){
       returnSet.push_back(str);
       returnSet.push_back(s[0]+str);
   }
   return returnSet;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector <string> result = powerSet(s);
        sort(result.begin(), result.end());
        for( auto str : result){
            cout<<str <<" ";
            cout<<endl;
        }
    }
    return 0;
    
}