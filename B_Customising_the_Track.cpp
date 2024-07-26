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
   ll t;
   cin>>t;
   while(t--){
    ll a,cnt=0;
      cin>>a;

      for(ll i=0;i<a;i++){
            ll b;
           cin>>b;
           cnt+=b;

      }
   cnt%=a;
   cout<<cnt*(a-cnt)<<n;
  }
}
