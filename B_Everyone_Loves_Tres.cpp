#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>

/*
  Need to know how to actually approach this problem!

  We can observe that 66 is the lexicographically smallest number for n=2, n=1 and n=3 are impossible, and 36366 is the lexicographically smallest number for n=5.

  So our final answer is n−2 3's followed by 66 if n is even, −1 if n=1 or n=3, or n−5 3's followed by 36366 if n is odd and greater than or equal to 5.
*/

void solve() {
  int n;
  cin >> n;

  string str(n, '3');

  if (n == 1 || n == 3) {
    cout << -1 << endl;
  } else if (n % 2 == 0) {
    cout << string(n - 2, '3') << "66" << endl;
  } else {
    cout << string(n - 5, '3') << "36366" << endl;
  }
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
