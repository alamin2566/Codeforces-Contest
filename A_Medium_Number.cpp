#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int arr[N];
int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
      for(int i=0;i<3;i++){
        cin>>arr[i];
      }
      sort(arr,arr+3);

      cout<<arr[1]<<end;
   }
  }
