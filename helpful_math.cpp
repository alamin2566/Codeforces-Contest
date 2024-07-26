#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
char s[N];
int digits[N];
int main(){
   fast_tle;
   cin>>s;
   int n=strlen(s);
   int digit_id=0;
   for(int i=0;i<n;i+=2){
    digits[digit_id]=s[i]-'0';
    digit_id++;
   }
   sort(digits,digits+digit_id);
   for(int i=0;i<digit_id;i++){
    cout<<digits[i];
    if(i<digit_id-1)cout<<"+";
   }
   cout<<endl;
  }
