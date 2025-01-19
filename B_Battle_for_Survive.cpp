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

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxFighter = n > 2 ? *max(a.begin(), a.end() - 3) : 0;
  if (n > 2) *max(a.begin(), a.end() - 3) = 0;

  a[n - 2] -= maxFighter;

  for (int i = 0; i < n - 2; i++) {
    a[n - 2] -= a[i];
  }

  cout << a[n - 1] - a[n - 2] << endl;
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
