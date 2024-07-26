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
   ll t;
   cin>>t;
   while(t--){
    vector<ll>v;
    ll n,sz,p1,p2,x,y;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]!='?')v.push_back(i);
    }
    if(v.size()==0){
        for(int i=0;i<n;i++){
            if(i%2==0)s[i]='B';
            else{
                s[i]='R';
            }
        }
        else{
            for(int j=v[0];j>=0;j--){
                if(s[j]=='B' && s[j-1]=='?')s[j-1]='R';
                else if(s[j]=='R'&&s[j-1=='!'])s[j-1]='B';
            }
            for(int j=v.size()-1;j<n;j++){
                if(s[j]=='B'&&S[j+1]=='?')s[j+1]s[j+1]='R';
                else if(s[j]=='R'&&s[j+1]=='?')s[j+1]='B';
            }
            for(int i=0;i<v.size()-1;i++){
                p1=v[i];
                p2=v[i+1];
                if(p2-p1==)continue;
                else {
                    if((p2-p1-1)%2==0){
                        x=(p2-p1-1)/2;y=x}
                    }
                }
            }

        }
    }
   }
  }
