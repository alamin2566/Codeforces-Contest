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
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    map<ll,ll>mp;
    mp[0]++;
    ll sum=0,y=0;
    for(int i=0;i<x;i++){
        if(i%2==0)
            sum+=arr[i];
            else
                sum-=arr[i];
            if(mp[sum]){
                y=1;

            }
            mp[sum]++;


    }
    if(y==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
  }
