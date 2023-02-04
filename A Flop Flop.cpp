#include<bits/stdc++.h>
using namespace std;
int main(){

        int x;
        cin>>x;
        int arr[x];
        for(int i=1;i<=x;i++){
            cin>>arr[i];
        }
        int knt=0;
        int cnt=0;
        int sum=0;

        for(int i=1;i<=x;i++){


                if(arr[i]==-1||arr[i+1]==1){
                        sum+=max(sum,arr[i]);

               }






        }
          cout<<sum<<endl;



}
