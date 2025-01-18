#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n;
    cin >> n;
    int cows = n / 4;
    int chickens = (n % 4) / 2;
    cout << cows + chickens << endl;
  }
}