#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int l, zeros = 0, ones = 0, median;
  cin >> l;
  for (int i = 0; i < l; i++)
  {
    int temp;
    cin >> temp;
    if (temp == 1)
    {
      ones++;
    }
    else
    {
      zeros++;
    }
  }
  median = (l + 1) / 2;
  if (median > zeros)
  {
    cout << 1;
  }
  else
  {
    cout << 0;
  }
}