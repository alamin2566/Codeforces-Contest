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
    ll a,b;
    cin>>a>>b;
   if(a==b){
    cout<<0<<endl;
   }

   else{
    if(abs(a-b)%10==0){
        cout<<abs(a-b)/10<<endl;
    }
    else{
        //cout<<(abs(a-b)/10)+1<<endl;
    }
   }
   }
  }
