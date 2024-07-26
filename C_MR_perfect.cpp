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

#define INF 1000000

 int main(){
   int t;
   cin>>t;
   while(t--){
    int t1;
    cin>>t1;
     int mn=INF;
        int mn1=INF;
        int mn2=INF;

    for(int i=0;i<t1;i++){
        int n;
        string k;
        cin>>n>>k;


        if(k=="10"){
            mn=min(mn,n);

        }
        else if(k=="01"){
            mn1=min(mn1,n);
        }
        else if(k=="11"){
            mn2=min(mn2,n);
        }
    }


        int ok=min(mn2,mn+mn1);

      if(ok>=INF){
        ok=-1;
      }
      cout<<ok<<endl;

}
}





