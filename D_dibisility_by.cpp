#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
void primefact(int n){
    for(int i=2;i*i<=n;i++){

        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n=n/i;
            }
            cout<<i<<sp<<cnt<<sp;
        }
    }
    cout<<endl;
}

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    primefact(n);

   }
   return 0;
  }
