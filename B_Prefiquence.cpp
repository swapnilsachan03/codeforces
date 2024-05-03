#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n, m;
  cin >> n >> m;
  
  string a, b;
  cin >> a >> b;
  
  int res = 0;
  int i = 0, j = 0;

  while (i < n && j < m) {
    if (a[i] == b[j]) {
      i += 1;
      j += 1;
      res += 1;
    }

    else j += 1;
  }
  
  cout << res << "\n";
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
