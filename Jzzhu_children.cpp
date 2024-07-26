#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int n,m;
   cin>>n>>m;
   int arr[n+2];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int sum=0;
   for(int i=0;i<m;i++){
        sum+=arr[i];
    }
   cout<<sum<<endl;

  }
