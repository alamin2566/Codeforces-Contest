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

   ll arr[200006];

   for(int i=1;i<=200006;i++){
              ll ok=i;
              ll sum=0;
              while(ok!=0){
                sum+=ok%10;
                ok/=10;
              }
              arr[i]=sum+arr[i-1];
   }
   ll t;
   cin>>t;
   while(t--){
    int x;
    cin>>x;
    cout<<arr[x]<<endl;

   }

}
