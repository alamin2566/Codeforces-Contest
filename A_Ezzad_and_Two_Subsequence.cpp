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
  ll t, sum2;

   cin>>t;
   while(t--){
     ll a,mx=INT_MIN,sum=0;

       cin>>a;
       ll arr[a];
       for(ll i=0;i<a;i++){
            cin>>arr[i];
            sum+=arr[i];
     mx=max(mx,arr[i]);
   }
   sum=sum-mx;
  double total=(float)sum/(a-1);
  cout<<fixed<<setprecision(9)<<mx+total<<n;


  }
}
