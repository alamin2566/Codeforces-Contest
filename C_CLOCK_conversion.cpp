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
     string s;
     cin>>s;
     vector<string>v;
     stringstream ss(s);
     string token;
     while(getline(ss,token,':')){
        v.push_back(token);
     }
     //cout<<token<<endl;

     int ok=stoi(s);
      if(ok<11 and ok!=0){
          cout<<"0"<<ok<<":"<<token<<sp<<"AM"<<endl;
      }
    else if(ok>12){
        cout<<"0"<<abs(ok-12)<<":"<<token<<sp<<"PM"<<endl;
      }
      else if(ok==12){
        cout<<ok<<":"<<token<<sp<<"PM"<<endl;
      }
      else if(ok==0){
        cout<<12<<":"<<token<<sp<<"AM"<<endl;
      }
      if(ok==11){
        cout<<11<<":"<<token<<sp<<"AM"<<endl;
      }
  }
}
