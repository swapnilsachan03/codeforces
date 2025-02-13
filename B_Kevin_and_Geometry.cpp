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

  vector<ll> sticks(n);

  for (int i = 0; i < n; i++) {
    cin >> sticks[i];
  }

  sort(sticks.begin(), sticks.end());

  int eq = -1, idx = -1;

  for (int i = 0; i < n - 1; i++) {
    if (sticks[i] == sticks[i + 1]) {
      eq = sticks[i];
      idx = i;
    }
  }

  if (idx == -1) {
    cout << -1 << endl;
    return;
  }

  vi rem(n);
  int j = 0;

  for (int i = 0; i < n; i++) {
    if (i != idx && i != idx + 1) rem[j++] = sticks[i];
  }

  for (int i = 0; i < j - 1; i++) {
    if (2 * eq > rem[i + 1] - rem[i]) {
      cout << eq << " " << eq << " " << rem[i] << " " << rem[i + 1] << endl;
      return;
    }
  }

  cout << -1 << endl;
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
