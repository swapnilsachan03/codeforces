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

    string coins;
    cin >> coins;

    int up = 0;

    for (int i = 0; i < n; i++) {
      if (coins[i] == 'U') up += 1;
    }

    if (up % 2 == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
