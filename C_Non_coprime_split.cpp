#include <bits/stdc++.h>
using namespace std;
#define ll long long
int findDivisor(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return i;
    }
    return n;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    if(l <= 3 and r <= 3) {
        cout << -1 << endl;
        return;
    }
    if(r - l >= 1)
    {
        if(r % 2) r--;
        cout << r / 2 << " " << r / 2 << endl;
        return;
    }
    if(findDivisor(l) == l) {
            cout << -1 << endl;
     return;
     }
    else
    cout << findDivisor(l) << " " << l - findDivisor(l) << endl;

}

int main()
{
    int t;
    cin>>t;
  while(t--){
    solve();
  }
    return 0;
}



