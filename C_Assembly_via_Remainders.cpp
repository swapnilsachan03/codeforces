#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/* notice that (a + b) % a = b for all 0 <= b < a, so, we can generate a sequence by using a[i - 1] in place of a and x in place of b, and we can take any value > x (say 1000) as the first value of the sequence so that our condition remains true

the maximum value of a[i] will be 1000 + 500n, which is less than 1e9 as n <= 500 */

void solve() {
  int n;
  cin >> n;

  int a = 1000;
  cout << 1000 << " ";

  for (int i = 1; i < n; i++) {
    int x;
    cin >> x;
    a += x;

    cout << a << " ";
  }

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
