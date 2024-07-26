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
    ll arr[x];
    ll sum=0,sum1=0;
    for(ll i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]>0){
            sum+=arr[i];
        }
        else{
            sum1-=arr[i];
        }

    }
    cout<<abs(sum-sum1)<<endl;

   }

  }
