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

  string s;
  cin >> s;

  int ans = 1, curr = 1;

  for (int i = 0; i < n - 1; i++) {
    if (s[i + 1] != s[i]) curr = 1;
    else curr += 1;

    ans = max(curr, ans);
  }

  cout << ans + 1 << endl;
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
