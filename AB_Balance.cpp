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
        int ab=0,ba=0;
   string s;
   cin>>s;
  for(int i=0;i<s.size();i++){

    if(s[i]=='a' && s[i+1]=='b')
        ab++;

    else if(s[i]=='b' && s[i+1]=='a')
        ba++;

  }
    if(ab==ba)cout<<s<<endl;
    else if(ab>ba){
        s[0]='b';
        cout<<s<<endl;
    }
     else{
        s[0]='a';
        cout<<s<<endl;
     }
  }


   }

