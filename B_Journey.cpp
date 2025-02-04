#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

void solve() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;

  int sum = a + b + c;

  int wholeDays = n / sum;
  int extraDays = 0;

  int left = n % sum;

  if (left > 0) {
    extraDays += 1;
    left -= a;
  }

  if (left > 0) {
    extraDays += 1;
    left -= b;
  }

  if (left > 0) extraDays += 1;

  cout << wholeDays * 3 + extraDays << endl; 
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
