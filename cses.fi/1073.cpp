#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, twr = 1;
  cin >> n;
  vector<int> number(n);
  multiset<int> twrs;

  for (int i = 0; i < n; i++)
  {
    cin >> number[i];
  }

  twrs.insert(number[0]);

  for (int i = 1; i < n; i++)
  {
    auto idx = twrs.upper_bound(number[i]);
    if (idx != twrs.end() && *idx != number[i])
    {
      twrs.erase(idx);
    }
    twrs.insert(number[i]);
  }

  cout << twrs.size();
}