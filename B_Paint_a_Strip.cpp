#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n;
  cin >> n;
  
  int ops = 1, lastIdx = 1;

  while (n > lastIdx) {
    lastIdx = 2 + lastIdx * 2;
    ops += 1;
  }

  cout << ops << endl;
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
