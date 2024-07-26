#include<bits/stdc++.h>

using namespace std;
#define ll long long

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
 vector<int>v;
 for(int i=0;i<n;i++)
    v.push_back(i+1);
vector<pair<int,int>>ans;
 for(int i=0;i<n-1;i++){
    auto it=v.end();
    it--;
    int a=*it;
    v.erase(it);
    it--;
    int b=*it;
    v.erase(it);
 ans.push_back(make_pair(a,b));
 v.push_back((a+b+1)/2);
 }
 cout<<v[0]<<endl;
 for(auto it:ans){
    cout<<it.first<<sp<<it.second<<endl;
 }
   }
  }
