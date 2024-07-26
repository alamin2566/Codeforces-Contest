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
   ll a,b;
   cin>>a>>b;
   ll ok=0;
   ok=(a*b)/(__gcd(a,b));
   cout<<ok<<endl;
  }
