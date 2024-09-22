#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

static bool compare(pair<pii, char> a, pair<pii, char> b) {
  if (a.first.first == b.first.first) {
    return a.first.second > b.first.second;
  }

  return a.first.first < b.first.first;
}

int main()
{
  string s;
  cin >> s;

  int n = s.length();

  vector<pair<pii, char>> res(n);

  int balance = 0;
  int open = 0, close = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '(') open += 1;
    else close += 1;

    res[i] = {{balance, i}, s[i]};
    balance = open - close;
  }

  sort(res.begin(), res.end(), compare);

  for (int i = 0; i < n; i++) {
    cout << res[i].second;
  }

  return 0;
}
