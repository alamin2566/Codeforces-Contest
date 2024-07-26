#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define nn '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int x;
    vector<int>a,a1;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)a.push_back(x);
        else a1.push_back(x);
    }
    int ans=0;
    int z=1;
    for(int i=0;i<a.size();i++){
        ans+=n-z;
        z++;
    }
    int ans1=0;
    sort(a1.begin(),a1.end());
    for(int i=0;i<a1.size();i++){
        for(int j=i+1;j<a1.size();j++){
            if(__gcd(a1[i],a1[j])>1)ans1++;
        }
    }
    cout<<ans+ans1<<nn;
   }
  }
