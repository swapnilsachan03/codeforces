#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int res (int a, int b) {
  if (a > b) return 1;
  if (a == b) return 0;
  if (a < b) return -1;
}

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int count = 0;

  // These are all the scenarios possible in this game, we have to check for all four

  if (res(a, c) + res(b, d) > 0) count += 1;
  if (res(a, d) + res(b, c) > 0) count += 1;
  if (res(b, c) + res(a, d) > 0) count += 1;
  if (res(b, d) + res(a, c) > 0) count += 1;

  cout << count << endl;
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
