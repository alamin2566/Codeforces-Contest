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
    int a;
    cin>>a;
    int sum=a/2;
    int noob=a-sum;
    int b=a+sum;
    int alu=0;
    alu=sum^noob;
    if(alu==a){
        cout<<"-1"<<n;
    }
    else{
        cout<<sum<<sp<<noob<<n;
    }
   }
  }
