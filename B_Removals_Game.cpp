#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* Bob can win if and only if the two permutations are the same, or the reverse of each other, in both the cases, Bob can remove the same number as Alice does in each move, and in the end both the arrays wll end up having the same number, but if this is not the case, Alice can remove any number which Bob does not have on either ends of his permuation, and he'll lose to Alice in any way he plays */

void solve() {
  int n;
  cin >> n;

  vi a (n), b (n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  if (a == b) {
    cout << "Bob" << endl;
    return;
  }

  reverse(a.begin(), a.end());

  if (a == b) cout << "Bob" << endl;
  else cout << "Alice" << endl;
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
