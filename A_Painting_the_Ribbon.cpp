#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    /* n - k parts of string must be of i color, and Bob will paint k parts with color i, so if less than n - k parts are colored with i, Bob won't be able to paint the string in one color
    
    so, if we color each of the (n - k - 1) parts with a different color and the resultant length is greater than or equal to n, that means that the max length of any color will be equal to or less than (n - k - 1) and Bob won't be able to color the string */

    int maxLen = (n - k - 1) * m;
    
    if (maxLen >= n) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
