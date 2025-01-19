#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  If we two numbers are already in non-decreasing sequence, subtract the minimum of the two from them to optimize for next pair's calculation. Now, doing so over and over again, minimizing the numbers, if we encounter nums[i] < nums[i - 1], output 'NO' and return.
*/

void solve() {
  int n;
  cin >> n;

  vi nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  for (int i = 1; i < n; i++) {
    if (nums[i] >= nums[i - 1]) {
      nums[i] -= nums[i - 1];
    } else {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
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
