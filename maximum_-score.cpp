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
    ll x;
    cin>>x;
       x*=2;
    ll arr[x];
    for(ll i=0;i<x;i++){
        cin>>arr[i];
    }
    ll sum=0;
       sort(arr,arr+x);
    for(ll i=0;i<x;i++){
            if(i%2==0){
                sum+=arr[i];
            }
   }
      cout<<sum<<endl;
   }
  }
