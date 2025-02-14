#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, r;
  cin >> n >> r;
  vector<vector<int>> adj(n);
  vector<bool> visited(n);
  vector<int> sep;

  for (int i = 0; i < r; i++)
  {
    int a, b;
    cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      queue<int> todo;
      visited[i] = true;
      sep.push_back(i);
      todo.push(i);

      while (!todo.empty())
      {
        int front = todo.front();
        todo.pop();
        for (int j = 0; j < adj[front].size(); j++)
        {
          if (!visited[adj[front][j]])
          {
            visited[adj[front][j]] = true;
            todo.push(adj[front][j]);
          }
        }
      }
    }
  }

  cout << sep.size() - 1 << "\n";

  for (int i = 1; i < sep.size(); i++)
  {
    cout << sep[0] + 1 << " " << sep[i] + 1 << "\n";
  }
}