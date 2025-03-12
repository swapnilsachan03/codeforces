#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int x = min(a, b);

  a -= x;
  b -= x;

  if ((a > 0 && c > 0) || (a == 0 && b == 0 && c % 2 == 1)) {
    cout << "First" << endl;
    return;
  }

  else cout << "Second" << endl;
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
