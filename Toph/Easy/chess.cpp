#include <bits/stdc++.h>

using namespace std;

bool isOdd(string &x)
{
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string x, y;

  cin >> x >> y;

  cout << ((((static_cast<int>(x[x.length() - 1]) - 48) % 2) ^ ((static_cast<int>(y[y.length() - 1]) - 48) % 2))
               ? "White"
               : "Black");
}