#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, l, r, k; cin >> n >> l >> r >> k;
  vector<int> v;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (x >= l and x <= r) {
      v.push_back(x);
    }
  }
  sort(v.begin(), v.end());
  int cnt = 0, sum = 0;
  for (int i = 0; i < v.size(); i++) {
    if (sum + v[i] <= k) {
      sum += v[i];
      cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}
