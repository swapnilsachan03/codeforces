#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  string s;
  cin >> s;

  int n = s.length();

  long long ans = 0, ones = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '1') ones += 1;
    else if (ones > 0) ans += ones + 1;
  }

  cout << ans << endl;
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
