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
   while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int arr[x];
    int brr[y];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<y;i++){
        cin>>brr[i];
    }
    set<int>s,ss,sss;
    for(int i=0;i<x;i++){
        if(arr[i]<=z)
         s.insert(arr[i]);

    }
    for(int i=0;i<y;i++){
            if(brr[i]<=z){
        ss.insert(brr[i]);
            }
    }
    for(auto j:s)
        sss.insert(j);
    for(auto w:ss){
        sss.insert(w);
    }
    if(s.size()>=z/2 and ss.size()>=z/2 and sss.size()>=z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   }
  }
