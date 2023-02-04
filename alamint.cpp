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
   int x;
   cin>>x;
   int arr[x];
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   int sum=0,noob=0,kool=0;
   for(int i=0;i<x;i++){
        sum+=arr[i];

   cout<<sum<<sp;
  }
}
