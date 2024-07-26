#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;




void solve() {
    int n, k;
  ll x;
    cin >> n >> k >> x;

    if (x >= 1LL * k * (k + 1) / 2 && x <= 1LL * k * (n + n - k + 1) / 2) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
     fast_tle;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
