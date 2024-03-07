#include <bits/stdc++.h>
using namespace std;

bool isDistinct (int n) {
  unordered_map<int, int> mp;
  
  int i = 0;
  while (n != 0) {
    mp[n % 10] += 1;
    i += 1;
    n /= 10;
  }

  for (auto it : mp) {
    if (it.second > 1) return false;
  }

  return true;
}

int main()
{
  int n;
  cin >> n;

  do {
    n += 1;
  } while (!isDistinct(n));

  cout << n << endl;

  return 0;
}
