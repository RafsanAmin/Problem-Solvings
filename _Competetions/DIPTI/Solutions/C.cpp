#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  vector<int> even(100);
  vector<int> odd(100);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    if (temp % 2 == 0)
    {
      even[i] = temp;
    }
    else
    {
      odd[i] = temp;
    }
  }

  for (int i = 0; i < even.size(); i++)
  {
    if (even[i] > even[0])
    {
      swap(even[i], even[0]);
    }
  }
  for (int i = 1; i < even.size(); i++)
  {
    if (even[i] > even[1])
    {
      swap(even[i], even[1]);
    }
  }

  for (int i = 0; i < odd.size(); i++)
  {
    if (odd[i] > odd[0])
    {
      swap(odd[i], odd[0]);
    }
  }
  for (int i = 1; i < odd.size(); i++)
  {
    if (odd[i] > odd[1])
    {
      swap(odd[i], odd[1]);
    }
  }

  if (even.size() == 1)
  {
    cout << odd[0] + odd[1];
  }
  else if (odd.size() == 1)
  {
    cout << even[0] + even[1];
  }
  else
  {
    cout << max(max(even[0] + even[1], odd[0] + odd[1]), (even[0] + odd[0] / 2));
  }
}