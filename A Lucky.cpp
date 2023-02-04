#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int x;
   cin>>x;
   while(x--){
  char s[100];
   cin>>s;
   int sum=s[0]+s[1]+s[2];
   int sum1=s[3]+s[4]+s[5];
   if(sum==sum1){
    cout<<"YES"<<end;
   }
   else{
    cout<<"NO"<<end;
   }
  }
}
