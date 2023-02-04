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
        string noob="314159265358979323846264338327";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==noob[i]){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<n;
    }
  }
