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
    if(a%2==0){
        cout<<max(15LL,(a/2)*5)<<n;
    }
    else{
        cout<<max(15LL,((a+1)/2)*5)<<n;
    }
   }
  }
