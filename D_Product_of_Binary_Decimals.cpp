#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define pii vector<pair<int, int>>

bool checkBinary (int n) {
  while (n)
  {
    int digit = n % 10;
    n /= 10;

    if (digit <= 1) continue;
    else return false;
  }
  
  return true;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (checkBinary(n)) {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;
  }

  return 0;
}
