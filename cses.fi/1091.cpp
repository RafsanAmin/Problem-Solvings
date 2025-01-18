#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  multiset<int> h;
  vector<int> queue;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    h.insert(temp);
  }

  for (int i = 0; i < m; i++)
  {
    int temp;
    cin >> temp;
    queue.push_back(temp);
  }

  for (int i = 0; i < m; i++)
  {
    // cout << queue[i] << " \n";
    auto idx = h.upper_bound(queue[i]);

    if (idx == h.begin())
    {
      cout << -1 << "\n";
    }
    else
    {

      idx--;
      cout << *idx << "\n";
      h.erase(idx);
    }
  }
}