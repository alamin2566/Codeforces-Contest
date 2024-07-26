#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;


int xorinacci(int a, int b, int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n % 3 == 2) return a ^ b;
    if (n % 3 == 0) return a;
    if (n % 3 == 1) return b;
    return 0;
}

int main() {
     fast_tle;
    int T;
    cin >> T;

    while (T--) {
        int a, b, n;
        cin >> a >> b >> n;
        cout << xorinacci(a, b, n) << endl;
    }

    return 0;
}
