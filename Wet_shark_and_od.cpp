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
   ll x;
   cin>>x;
   ll arr[x];
   for(ll i=0;i<x;i++){
    cin>>arr[i];
   }
   ll sum=0,mn=INT_MAX;
   for(ll i=0;i<x;i++){
      sum+=arr[i];
   }
   if(sum%2==0){
    cout<<sum<<endl;
    return 0;
   }
  for(ll i=0;i<x;i++){
     if(arr[i]%2!=0){
        mn=min(mn,arr[i]);
     }
  }
  cout<<sum-mn<<endl;

  }
