#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int i, e, u;
    cin >> i >> e >> u;

    if ((e + u) % 3 > u) {
      cout << -1 << endl;
      continue;
    }

    int extra = (e + u) % 3 == 0 ? 0 : 1;
    
    int ans = i + (e + u) / 3 + extra;
    cout << ans << endl;
  }

  return 0;
}
