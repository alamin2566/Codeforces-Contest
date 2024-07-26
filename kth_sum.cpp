#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5+9;
int arr[N],brr[N],n;
ll k;
int get_cnt(int lim){
    return upper_bound(brr+1,brr+n+1,lim)-brr-1;
}
bool fc(int x){
    ll cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=get_cnt(x-arr[i]);
    }
    return cnt>=k;
}
int main(){
   fast_tle;
   cin>>n>>k;
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   for(int i=1;i<=n;i++){
    cin>>brr[i];
   }
   sort(arr+1,arr+n+1);
   sort(brr+1,brr+n+1);
   int l=0,r=2e9,ans=0;
   while(l<=r){
    int mid=l+(r-l)/2;
    if(fc(mid)){
        ans=mid;
        r=mid-1;
    }
    else{
        l=mid+1;
    }
   }
   cout<<ans<<endl;
  }
