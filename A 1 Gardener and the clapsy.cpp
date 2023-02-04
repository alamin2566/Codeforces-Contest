#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    string s;
      cin>>s;
    int n=s.size();

    if(s[1]=='b'){
        cout<<s[0]<<' '<<s.substr(1,n-2)<<' '<<s[n-1]  <<end;
    }
    else{
        cout<<s[0]<<' '<<s[1]<<' '<<s.substr(2)<<end;
    }

   }
   return 0;
  }
