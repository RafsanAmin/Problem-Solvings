#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  set<int> N;
  for (int t = 1; t <= T; t++)
  {
    int temp;
    cin >> temp;
    N.insert(temp);
  }

  cout << N.size();
}