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
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int mx1,mn1,mx2,mn2;
     mx1=max(a,b);
     mn1=min(a,b);
     mx2=max(c,d);
     mn2=min(c,d);
     if(mx1>mn2&&mx2>mn1){
        cout<<"YES"<<n;
     }
     else{
        cout<<"NO"<<n;
     }

  }
}
