
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,mx=INT_MIN;
        cin>>a;
        ll arr[a];
        for(ll i=0;i<a;i++){
                cin>>arr[i];
        }
        for(ll i=1;i<a;i++){
        mx=max(mx,arr[i]*arr[i-1]);


    }
    cout<<mx<<'\n';


    }
}


