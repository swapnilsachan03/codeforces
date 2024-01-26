#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, l;
  cin >> n >> l;

  vector<int> lamps(n);
  for (int i = 0; i < n; i++) {
    cin >> lamps[i];
  }

  sort(lamps.begin(), lamps.end());

  double maxD = INT_MIN;
  for (int i = 1; i < n; i++) {
    maxD = max(maxD, (double) lamps[i] - lamps[i - 1]);
  }

  double ends = max(lamps[0], l - lamps[n-1]);

  cout.precision(10);
  cout << fixed << max(ends, maxD / 2);

  return 0;
}
