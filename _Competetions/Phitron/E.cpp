#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<int, int> val_count;

  int Q, total_count = 0, min_count = -1, min_val = -1, prev_min_count = 2E9, prev_min_val = 2E9;
  cin >> Q;

  for (int q = 0; q < Q; q++)
  {
    int type;
    cin >> type;
    if (type == 2)
    {
      if (total_count <= 0)
      {
        cout << "empty\n";
      }
      else
      {
        cout << min_val << " " << min_count << "\n";

        val_count[min_val] -= max(1, (val_count[min_val] / 2));
        min_count = val_count[min_val];
        total_count -= max(1, (val_count[min_val] / 2));
        // cout << (total_count == 0 ? "empty" : to_string(min_val)) << "\n";
      }
    }
    else
    {
      int v;
      cin >> v;
      total_count++;
      val_count[v]++;

      if (v == min_val)
      {
        min_count++;
      }
      else if (val_count[v] < min_count || min_val == -1)
      {
        min_count = val_count[v];
        min_val = v;
      }
      else if (val_count[v] == min_count)
      {
        min_val = max(v, min_val);
      }
    }
  }
}