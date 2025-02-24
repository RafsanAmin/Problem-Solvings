#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<short int> assigned;

bool dfs(int k)
{
  int curr = assigned[k];
  int j = curr == 1 ? 2 : 1;

  for (int i = 0; i < adj[k].size(); i++)
  {

    if (assigned[adj[k][i]] == 0)
    {
      assigned[adj[k][i]] = j;

      if (!dfs(adj[k][i]))
        return false;
    }
    else
    {
      if (assigned[adj[k][i]] != j)
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, v;
  bool valid = true;
  cin >> n >> v;

  adj.resize(n);
  assigned.resize(n);

  for (int i = 0; i < v; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[--a].push_back(--b);
    adj[b].push_back(a);
  }

  for (int i = 0; i < n; i++)
  {
    if (assigned[i] == 0)
    {

      assigned[i] = 1;

      if (!dfs(i))
      {
        valid = false;
        break;
      };
    }
  }

  if (valid)
  {
    for (int i = 0; i < n; i++)
    {
      cout << assigned[i] << " ";
    }
  }
  else
  {
    cout << "IMPOSSIBLE";
  }
}