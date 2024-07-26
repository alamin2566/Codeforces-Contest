#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

void sieve(ll n){
    ll prime[n+2];
    memset(prime,0,sizeof(prime));
    for(ll i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<sp;
        }
    }
    cout<<endl;
}
int main(){
   fast_tle;
  ll n;
  cin>>n;
  sieve(n);
  }
