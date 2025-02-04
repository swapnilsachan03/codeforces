#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  If you encounter m consecutive weak spots, heal them from the mth to (m + k - 1)th position, i.e.

  -> Increment count if weak spot, else make count 0
  -> If count == m, heal m and next k - 1 spots or increment i by k - 1, increment ans by 1, and make count 0 again
*/

void solve() {
  int n, m, k;
  string s;

  cin >> n >> m >> k;
  cin >> s;

  int ans = 0, cnt = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '0') cnt += 1;
    else cnt = 0;

    if (cnt == m) {
      cnt = 0;
      ans += 1;
      i += k - 1;
    }
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
