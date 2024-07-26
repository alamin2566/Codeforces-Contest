#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int n,k;
bool fc(int x){
    int not_div=x-x/n;
    return not_div>=k;
}

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    cin>>n>>k;
    int l=1,r=2e9,ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(fc(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

   cout<<ans<<endl;
   }
  }
