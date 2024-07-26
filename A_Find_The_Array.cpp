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
    int a, i=1,cnt=0,knt=0;
    cin>>a;
    while(knt<a){
        cnt++;
        knt+=i;
        i+=2;
    }
    cout<<cnt<<n;
   }
  }
