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
    while (t--) {
       ll x;
       cin>>x;
       string s;
       cin>>s;
       vector<ll>v;
       s+='e';
       for(int i=0;i<x-1;i++){
        if(i==0)continue;
        if(s[i]!='a' && s[i]!='e' && s[i+1]!='a' && s[i+1]!='e'){
            v.push_back(i);
            i++;
        }
        else if(s[i]!='a' && s[i]!='e'){
            v.push_back(i-1);
        }
       }
       v.push_back(300000);
       int ok=0;
       for(int i=0;i<x;i++){
        if(v[ok]==i){
            cout<<s[i]<<".";
            ok++;
        }
        else{
            cout<<s[i];
        }
       }
       cout<<endl;
    }

    }
