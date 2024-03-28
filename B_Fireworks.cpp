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
    long long a, b, m;
    cin >> a >> b >> m;

    cout << ((a + m) / a) + ((b + m) / b) << endl;
  }

  return 0;
}
