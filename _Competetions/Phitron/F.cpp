#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  bool hocce = true;
  int n, k, i = 0;
  string s;
  cin >> n >> k;
  cin >> s;
  for (int i = 0; i < k; i++)
  {
    if (next_permutation(s.begin(), s.end()))
    {
      continue;
    }
    else
    {
      hocce = false;
      break;
    }
  }

  if (hocce)
  {
    cout << s;
  }
  else
  {
    cout << -1;
  }
}