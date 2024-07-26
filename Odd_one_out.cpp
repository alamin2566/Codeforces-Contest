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
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b and a!=c and b==c){
           cout<<a<<endl;
    }
    if(b!=c and b!=a and a==c){
        cout<<b<<endl;
    }
    if(c!=a and c!=b and a==b){
        cout<<c<<endl;
    }
   }
  }
