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
    ll a;
    cin>>a;

   while(a%2==0)
    a/=2;
    if(a==1)
        cout<<"NO"<<n;

    else
        cout<<"YES"<<n;


  }
}
