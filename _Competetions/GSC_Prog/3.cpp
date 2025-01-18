#include <bits/stdc++.h>
using namespace std;

void topsort1(int v, vector<vector<int>> &adj, vector<bool> &vist, stack<int> &stck)
{

  vist[v] = true;

  for (int i : adj[v])
  {
    if (!vist[i])
      topsort1(i, adj, vist, stck);
  }

  stck.push(v);
}

void topsort2(vector<vector<int>> &adj, int V)
{
  stack<int> s;
  vector<bool> visited(V, false);

  for (int i = 0; i < V; i++)
  {
    if (!visited[i])
      topsort1(i, adj, visited, s);
  }

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
}

int main()
{

  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
  }
  int V = 4;

  // Edges
  vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 1}, {3, 2}};

  // Graph represented as an adjacency list
  vector<vector<int>> adj(V);

  for (auto i : edges)
  {
    adj[i[0]].push_back(i[1]);
  }

  cout << "Topological sorting of the graph: ";
  topsort2(adj, V);

  return 0;
}