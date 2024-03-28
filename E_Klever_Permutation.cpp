/* If we look at the array constructed from subarray sums, we notice that it's always of the form [x, x+1, x, x+1, ...], or [x, x-1, x, x-1, ...]

  If we construct a permutation of the first form then:

  -> for the elements at the even position, a[i] + 1 = a[i + k]
  -> for the elements at the odd position, a[i] = a[i + k] + 1
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vi nums (n, 0);
    int l = 1, r = n;

    for (int i = 0; i < k; i++) {
      for (int j = i; j < n; j += k) {
        nums[j] = i % 2 == 1 ? l++ : r--;
      }
    }

    for (auto it : nums) cout << it << " ";
    cout << endl;
  }

  return 0;
}
