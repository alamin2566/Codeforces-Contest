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
    int m;
    cin>>m;
    ll x=1,ans=m-x;
    while(x<=m){
        ans=min(ans,m-x);
        x*=10;

    }
    cout<<ans<<n;
   }
  }
