#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  unordered_map<char, int> nums(0);
  string s;
  cin >> s;
  for (char x : s)
  {
    nums[x]++;
  }
  if (nums['c'] >= 2 && nums['o'] >= 2 && nums['h'] >= 1 && nums['l'] >= 1 && nums['a'] >= 1 && nums['t'] >= 1 && nums['e'] >= 1)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
  return 0;
}