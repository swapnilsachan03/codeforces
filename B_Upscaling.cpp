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
    int n;
    cin >> n;

    string s(2 * n, '.');
    vector<string> ans(2 * n, s);

    int ver = 0, hor = 0;

    for (int i = 0; i < 2 * n; i++) {
      for (int j = 0; j < 2 * n; j++) {
        if ((i / 2 + j / 2) % 2 == 0) {
          ans[i][j] = '#';
        }
      }
    }

    for (int i = 0; i < 2 * n; i++) {
      cout << ans[i] << endl;
    }
  }

  return 0;
}
