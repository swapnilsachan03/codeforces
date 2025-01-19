#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int fibonacci (vector<int> arr) {
  int res = 0;

  for (int i = 0; i < 3; i++) {
    if (arr[i] + arr[i + 1] == arr[i + 2]) {
      res += 1;
    } else {
      continue;
    }
  }

  return res;
}

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int x = fibonacci({a, b, a + b, c, d});
  int y = fibonacci({a, b, c - b, c, d});
  int z = fibonacci({a, b, d - c, c, d});

  cout << max(max(x, y), z) << endl;
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
