#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main()
{
  int n;
  cin >> n;

  bool foundZero = false;
  ll mn = INT_MAX, mx = INT_MIN;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;

    if (x == 0) foundZero = true;
    else if (x < 0) mx = max(x, mx);
    else mn = min(x, mn);
  }

  if (foundZero) cout << 0 << endl;
  else cout << min(-1 * mx, mn) << endl;

  return 0;
}
