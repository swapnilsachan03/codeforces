#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  Alice gets the most points if she picks all the marbles of the same color, but she can do this only if there is only one marble of that color, because otherwise, Bob will play optimally and take one marble of the same color after Alice, hence:

  -> Initially, Alice and Bob will pick the single colored marbles one by one, and Alice will play first, hence getting ceil(singles / 2.0) * 2 points
  -> For all other colors, count of marbles >= 2, hence Alice will get one point for each color
*/

void solve() {
  int n;
  cin >> n;

  vi marbles(n);
  unordered_map<int, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> marbles[i];
    mp[marbles[i]] += 1;
  }

  int ans = 0, singles = 0;

  for (auto it : mp) {
    if (it.second == 1) singles += 1;
    else ans += 1;
  }

  ans += ceil(singles / 2.0) * 2;
  cout << ans << endl;

  return;
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
