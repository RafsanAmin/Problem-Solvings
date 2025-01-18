#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<string> s;
  int size = pow(2, n);
  // cout << size << "\n";
  s.resize(size);

  s[0] = "0";
  s[1] = "1";

  for (int i = 2; i < size; i *= 2)
  {
    for (int j = i - 1; j >= 0; j--)
    {
      s[i + j] = s[i - j - 1];
    }

    for (int j = 0; j < i; j++)
    {
      s[j] += '0';
    }
    for (int j = i; j < 2 * i; j++)
    {
      s[j] += '1';
    }
  }

  for (string x : s)
  {
    cout << x << "\n";
  }
}