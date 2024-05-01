#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string houses;
    cin >> houses;

    vector<int> right (n + 1, 0);
    
    for (int i = n - 1; i >= 0; i--) {
      if (houses[i] == '1') right[i] += 1;
      right[i] += right[i + 1];
    }

    int lefts = 0;
    int ans = -1;
    int opt_dist = n * 2;

    for (int i = 0; i <= n; i++) {
      if (lefts >= (i + 1) / 2 && right[i] >= (n - i + 1) / 2 && abs(n - 2 * i) < opt_dist) {
        opt_dist = abs(n - 2 * i);
        ans = i;
      }

      if (i != n) {
        lefts += (houses[i] == '0' ? 1 : 0);
      }
    }

    cout << ans << endl;
  }

  return 0;
}
