#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  string s;
  cin >> s;

  int zeroCount = 0;
  int oneCount = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      if (oneCount > 0) oneCount = 0;
      zeroCount += 1;

      if (zeroCount >= 7) {
        cout << "YES" << endl;
        return;
      }
    } else {
      if (zeroCount > 0) zeroCount = 0;
      oneCount += 1;

      if (oneCount >= 7) {
        cout << "YES" << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}

int main()
{
  solve();
  return 0;
}
