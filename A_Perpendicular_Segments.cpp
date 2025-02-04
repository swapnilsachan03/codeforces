#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  We'll have a rectangle of sides measuring x, y. Inside it, imagine a square box of side length, say a = min(x, y),

  -> One corner of the square is at (0, 0)
  -> One edge is on the x-axis and the other at y-axis, and the other two will be parallel to them
  -> The corner opposite to (0, 0) will be at (a, a)
  -> As the diagonals of the square are at right angle, give their coordinates
*/

void solve() {
  int x, y, k;
  cin >> x >> y >> k;

  int a = min(x, y);

  cout << "0 0 " << a << " " << a << endl;
  cout << "0 " << a << " " << a << " 0" << endl;
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
