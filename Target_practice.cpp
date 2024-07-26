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
    char arr[11][11];
    int a=0,a1=0,a2=0,a3=0,a4=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='X'){
                if(i==1 || i==10 || j==1 || j==10){
                a++;

                }
                else if(i==2|| i==9 || j==2 || j==9){
                    a1++;
                }
                else if(i==3 || i==8 || j==3 || j==8){
                    a2++;
                }
                else if(i==4 || i==7 || j==4 || j==7){
                    a3++;
                }
                else if(i==5 || i==6 || j==5 || j==6){
                    a4++;
                }
            }
        }
    }
    cout<<a<<sp<<a1<<sp<<a2<<sp<<a3<<sp<<a4<<endl;
    ll ans=a*1+a1*2+a2*3+a3*4+a4*5;
    cout<<ans<<endl;
   }
  }
