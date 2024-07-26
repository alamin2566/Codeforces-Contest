#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
double f(double x){
    return x*x+sqrt(x);
}

int main(){
   fast_tle;
   double c;
   cin>>c;
   double l=0,r=1e5,ans=0;
   while(r-l>=1e-8){
    double mid=(l+r)/2;
    if(f(mid)>=c){
        ans=mid;
        r=mid;
    }
    else{
        l=mid;
    }
   }
   cout<<fixed<<setprecision(10)<<ans<<endl;
  }
