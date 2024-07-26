#include <bits/stdc++.h>

using namespace std;
#define ll long long
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int main(){

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int sum=0;
   for(int i=0;i<n;i++){
            int k;
            cin>>k;
           int cnt=0;
            while(k%2==0){
                cnt++;
                k/=2;
            }
            sum+=cnt;
   }
   vector<int>v;
   int cnt1;
   for(int j=1;j<=n;j++){
       cnt1=0;
          int x=j;
          while(x%2==0){
            cnt1++;
            x/=2;
          }
          v.push_back(cnt1);
   }
  sort(v.begin(),v.end(),greater<int>());
   int ans=0;
   for(int i=0;i<v.size();i++){
         if(sum>=n)break;
         sum+=v[i];
         ans++;
   }
   if(sum>=n){
    cout<<ans<<endl;
   }
   else
    cout<<-1<<endl;


   }
  }
