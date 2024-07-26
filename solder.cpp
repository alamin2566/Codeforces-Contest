#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX=1e5+9;

int main(){
   fast_tle;
   int x;
   cin>>x;
   deque<int>a,b;
   int k;
   cin>>k;
   while(k--){
    int x;
    cin>>x;
    a.push_back(x);
   }
   cin>>k;
   while(k--){
    int x;
    cin>>x;
    b.push_back(x);
   }
   int fights=0,won=-1;
   while(fights<MAX){
      if(a.empty()){
        won=2;
        break;
      }
      if(b.empty()){
        won=1;
        break;
      }
      int a_top=a[0],b_top=b[0];
      a.pop_front();
      b.pop_front();
      if(a_top>b_top){
        a.push_back(b_top);
        a.push_back(a_top);
      }
      else{
        b.push_back(a_top);
        b.push_back(b_top);
      }
      fights++;

   }
   if(won==-1){
    cout<<-1<<endl;
   }
   else{
    cout<<fights<<sp<<won<<endl;
   }

  }
