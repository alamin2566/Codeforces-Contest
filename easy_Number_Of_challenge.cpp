#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e6+9;
int d[N];
int main(){
   fast_tle;
   for(int i=1;i<N;i++){
    for(int j=i;j<N;j+=i){
        d[j]++;
   }
  }
  int a,b,c;
  cin>>a>>b>>c;
  int sum=0;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        for(int k=1;k<=c;k++){
            int pro=i*j*k;
            sum+=d[pro];
        }
    }
  }
  cout<<sum<<endl;
  }
