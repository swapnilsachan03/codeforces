#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>
 
void solve() {
  int n;
  cin >> n;

  vector<ll> a(n);
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  if (n <= 2) {
    cout << -1 << endl;
    return;
  }

  sort(a.begin(), a.end());

  ll k = a[n/2];

  if (sum / (2.0 * n) > k) {
    cout << 0 << endl;
    return;
  }

  ll ans = (2 * n * k) - sum + 1;
  cout << max(0ll, ans) << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
