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
 string s[t];
 for(int i=0;i<t;i++){
    cin>>s[i];
 }
 sort(s,s+t,[](string a,string b){
     return a+b<b+a;
 });
 for(int i=0;i<t;i++){
    cout<<s[i];
 }
 cout<<endl;
  }
