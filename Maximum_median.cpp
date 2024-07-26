#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int n,k,arr[N];
bool fc(int x){
    ll mn_op=0;
    for(int i=(n+1)/2;i<=n;i++){
            //cout<<"i "<<i<<sp<<x<<" x"<<endl;
        if(arr[i]<x){
            mn_op+=x-arr[i];
           // cout<<mn_op<< " mnop"<<sp<<x-arr[i]<< " x-arr[i["<<endl;
        }
    }
    //cout<<mn_op<<" op"<<endl;
    return mn_op<=k;
}

int main(){
   fast_tle;
   cin>>n>>k;
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   sort(arr+1,arr+n+1);
   int x=0,ans=0;
int l=0,r=2e9;
 while(l<=r){
     int mid=l+(r-l)/2;
     if(fc(mid)){
        ans=mid;
        l=mid+1;
     }
     else{
        r=mid-1;
     }
 }
   cout<<ans<<endl;
  }
