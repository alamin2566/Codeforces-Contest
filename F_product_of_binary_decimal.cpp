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
        string x;
         cin>>x;
         int ok=0;
        for(int i=0;i<x.size();i++){
             if(x[i]=='1' or x[i]=='0'){
                ok=1;
             }
        }
        if(ok==1){
            cout<<"YES"<<endl;
        }
   }
  }
