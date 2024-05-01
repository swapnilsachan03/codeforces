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
    int n;
    cin >> n;

    vector<int> problems(n);
    vector<int> ratings(n);

    for (int i = 0; i < n; i++) {
      cin >> problems[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> ratings[i];
    }

    sort(problems.begin(), problems.end());

    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (problems[i] <= ratings[i]) {
        continue;
      }

      else {
        problems.insert(problems.begin() + i, ratings[i]);
        problems.pop_back();

        ans += 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
