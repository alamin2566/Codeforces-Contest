#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=abs(a-1);
    int sum2=abs(b-c)+(c-1);
    if(sum1<sum2){
        cout<<"1"<<end;
    }
    else if(sum1==sum2){
        cout<<"3"<<end;
    }
    else{
        cout<<"2"<<end;
    }
   }
  }
