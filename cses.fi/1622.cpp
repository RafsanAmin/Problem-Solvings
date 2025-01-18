#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  int i = 0;
  set<string> sl;
  cin >> s;
  sort(s.begin(), s.end());

  do
  {
    sl.insert(s);
    i++;
  } while (next_permutation(s.begin(), s.end()));

  cout << i << "\n";
  for (string x : sl)
  {
    cout << x << "\n";
  }
}