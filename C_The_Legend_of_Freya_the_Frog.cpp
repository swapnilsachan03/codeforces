#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int x, y, k;
  cin >> x >> y >> k;

  int minX = x / k + (x % k ? 1 : 0);
  int minY = y / k + (y % k ? 1 : 0);
  
  if (minY >= minX) {
    cout << 2 * minY << endl;
    return;
  }

  else {
    cout << 2 * minX - 1 << endl;
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
