#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
void blv(){
        long long x;
            cin>>x;
            string s;
            cin>>s;
            long long a=0,b=0;
            for(auto i:s){
                if(i=='U')b++;
                if(i=='L')a--;
                if(i=='D')b--;
                if(i=='R')a++;
                 if(a==1 && b==1){
                    cout<<"YES"<<n;
                 return;
                }




            }
            cout<<"NO"<<n;


        }


int main(){
        long long t;
        cin>>t;
        while(t--){
        blv();
    }
}






