#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, m;
  cin >> n;

  vi a (n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;

  string s;
  unordered_map<char, int> c2n;
  unordered_map<int, char> n2c;

  for (int i = 0; i < m; i++) {
    cin >> s;

    if (s.length() != n) {
      cout << "NO" << endl;
      continue;
    }

    bool flag = true;

    for (int j = 0; j < n; j++) {
      if (c2n.find(s[j]) == c2n.end() && n2c.find(a[j]) == n2c.end()) {
        c2n[s[j]] = a[j];
        n2c[a[j]] = s[j];
      } else if (c2n[s[j]] == a[j] && n2c[a[j]] == s[j]) {
        continue;
      } else {
        flag = false;
        break;
      }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    c2n.clear();
    n2c.clear();
  }
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
