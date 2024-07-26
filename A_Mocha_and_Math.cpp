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
    int a,sum=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sum=arr[0];
    for(int i=1;i<a;i++){
        sum=sum&arr[i];
    }
    cout<<sum<<n;
   }
  }
