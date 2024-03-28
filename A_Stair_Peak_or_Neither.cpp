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
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) cout << "STAIR" << endl;
    else if (a < b && b > c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
  }

  return 0;
}
