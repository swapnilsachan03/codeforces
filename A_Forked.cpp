#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  -> A knight can attack the king or the queen from 8 specific positions only.
  -> Calculate all the 8 positions from where the knight can attack the king and the 8 positions from where it can attack the queen.
  -> Count the number of common (x, y) in both lists to obtain the answer.
*/

int dx[] = { 1, 1, -1, -1 };
int dy[] = { 1, -1, 1, -1 };

void solve() {
  int a, b;
  cin >> a >> b;

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  set<pii> st1, st2;

  int ans = 0;

  for (int i = 0; i < 4; i++) {
    st1.insert({ x2 + dx[i] * a, y2 + dy[i] * b });
    st1.insert({ x2 + dx[i] * b, y2 + dy[i] * a });
    st2.insert({ x1 + dx[i] * a, y1 + dy[i] * b });
    st2.insert({ x1 + dx[i] * b, y1 + dy[i] * a });
  }

  for (auto it : st1) {
    if (st2.find(it) != st2.end()) ans += 1;
  }

  cout << ans << endl;
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
