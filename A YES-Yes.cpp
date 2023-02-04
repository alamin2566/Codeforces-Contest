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
        string m="";
        for(int i=0;i<=100;i++){
            m=m+"Yes";
        }
        bool ok=false ;
        for(int i=0;i<m.size();i++){
            if(i+n-1<m.size()&& m.substr(i,n)==s){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<end;
        }
        else{
            cout<<"NO"<<end;
        }

   }
  }
