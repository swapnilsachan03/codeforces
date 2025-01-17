#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  int n;
  string str;

  cin >> n >> str;

  unordered_map<char, int> mp;
  vector<pair<int, char>> frq;

  for (char ch : str) mp[ch] += 1;
  for (auto it : mp) frq.push_back({ it.second, it.first });
  sort(frq.begin(), frq.end());

  str[str.find(frq[0].second)] = frq.back().second;
  cout << str << endl;
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
