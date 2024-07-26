#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define nn '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main()
{
  int a,b;
  cin>>a>>b;
  int arr[a][b],arr2[a][b];
  int sum;


  for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
        cin>>arr[i][j];

    }
  }
   cin>>sum;

  for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){

    arr2[i][j]=sum*arr[i][j];
    }


  }
cout<<"orginal"<<endl;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cout<<arr[i][j]<<sp;
    }
    cout<<endl;
  }
  cout<<"Multipled by"<<sum<<endl;
  for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<arr2[i][j]<<sp;
        }
        cout<<endl;
  }
}
