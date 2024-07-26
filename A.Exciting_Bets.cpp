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
    ll diff=abs(a-b);
    if(a==b){
        cout<<"0"<<" "<<"0"<<n;
        continue;
    }
    ll x=a%diff;
    ll y=b%diff;
    if(x!=y){
        cout<<"0"<<" "<<"0"<<n;
    }
    else{
        ll ans=min(diff-x,x);
        cout<<diff<<" "<<ans<<n;
    }

  }
  }
