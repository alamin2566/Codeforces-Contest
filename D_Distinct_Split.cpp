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
    int cnt=0;
    int knt=0;
    string s;
    cin>>s;
     for(int i=0;i<s.size();i++){

        if(s[i]!=s[i+1]){
            cnt++;
        }
        else if(s[i]==s[i+1]){
                knt++;

        }


   }
     cout<<cnt+knt<<n;
  }
}
