#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  We've to build a permutation of length n, where the sum of minimum values of all subarrays of length k must be minimum
  
  -> For the first k subarrays of length k, the minimum value can be 1
  -> Similarly for the k + 1 to (2k)th subarrays, the minimum value would be 2, and so on
  -> This means that, we can make num[k] = 1, num[2k] = 2, etc, as long as the m * k <= n
  -> Rest all the places can be filled arbitrarily
*/

void solve() {
  int n, k;
  cin >> n >> k;

  int idx = k - 1;
  int mn = 1, mx = n;

  for (int i = 0; i < n; i++) {
    if (i == idx) {
      cout << mn++ << " ";
      idx += k;
      continue;
    }

    cout << mx-- << " ";
  }

  cout << endl;
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
