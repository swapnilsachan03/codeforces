#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  The stick will be at its correct place if sticks[i] == i + 1

  -> Since the sticks can be swapped with their adjacent neightbours only, when forming the permutation, this pattern must've held true, hence, if the current stick + 1 = next stick, swap them.
  -> Else, return NO.
*/

void solve() {
  int n;
  cin >> n;

  vi sticks(n);

  for (int i = 0; i < n; i++) {
    cin >> sticks[i];
  }

  for (int i = 0; i < n - 1; i++) {
    if (sticks[i] == i + 1) continue;

    if (sticks[i] - sticks[i + 1] == 1) {
      swap(sticks[i], sticks[i + 1]);
    } else {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES" << endl;
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
