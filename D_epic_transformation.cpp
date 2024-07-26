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
    int x;
    cin>>x;
    vector<int>arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    map<int,int>frq;
    for(int i=0;i<x;i++){
        frq[arr[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto [val,cnt]:frq){
        pq.push(make_pair(cnt,val));
    }
    int cnt=x;
    while(pq.size()>1){
        auto[cnt1,val1]=pq.top();
        pq.pop();
        auto [cnt2,val2]=pq.top();
        pq.pop();
        cnt1--;
        cnt2--;
        cnt-=2;
        if(cnt1>0)pq.push(make_pair(cnt1,val1));
        if(cnt2>0)pq.push(make_pair(cnt2,val2));
    }
    cout<<cnt<<endl;
   }
   return 0;

  }
