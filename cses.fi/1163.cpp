#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x, q;
  cin >> x >> q;

  multiset<int> ranges;
  multiset<int> diff;

  ranges.insert(0);
  ranges.insert(x);

  diff.insert(x);

  for (int i = 0; i < q; i++)
  {
    int temp;
    cin >> temp;

    auto hi = ranges.upper_bound(temp);
    auto lo = prev(hi);

    // cout << *hi - *lo - 1;

    diff.erase(diff.lower_bound(*hi - *lo));

    diff.insert(*hi - temp);
    diff.insert(temp - *lo);

    ranges.insert(temp);

    cout << *(prev(diff.end())) << " ";
  }
}