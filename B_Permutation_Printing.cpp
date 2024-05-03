#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* in this problem, we've to make sure that for any 1 <= i, j < n, a[j] % a[i] != 0 && a[j + 1] % a[i + 1] != 0 and for this we can construct an array where elements at odd indices are in increasing order and elements at even indices are in decreasing order

this fashion of constructing a permutation makes sure that even if a[j] % a[i] == 0, a[j + 1] % a[i + 1] != 0 as a[j + 1] will be smaller than a[i + 1] or they'll be contiguous  */

void solve() {
  int n;
  cin >> n;

  vi res(n);

  int num = 1;
  for (int i = 0; i < n; i += 2) res[i] = num++;
  num = n;
  for (int i = 1; i < n; i += 2) res[i] = num--;

  for (int i = 0; i < n; i++) cout << res[i] << " ";
  cout << endl;
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
