#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int x;
    string s;
    cin>>x>>s;
    int cnt=0;
    int mx=INT_MIN;
      for(int i=0;i<x;i++){

       if(s[i]=='@'){
        cnt++;
       }
      if(s[i]=='*' and s[i+1]=='*'){
               break;
       }
         mx=max(mx,cnt);
      }
      cout<<mx<<endl;
   }
  }
