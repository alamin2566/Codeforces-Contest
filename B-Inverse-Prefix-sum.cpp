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
    for(int i=1;i<=x;i++){
        cin>>arr[i];


  }
 arr[0]=0;
  for(int i=1;i<=x;i++){

   cout<<arr[i]-arr[i-1]<<sp;
  }
}
