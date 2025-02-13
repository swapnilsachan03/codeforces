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

  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1]) {
      cout << 1 << endl;
      return;
    }
  }

  cout << s.length() << endl;
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
