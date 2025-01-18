#include <bits/stdc++.h>

//

using namespace std;

vector<int> pos(17, 1);
vector<int> rec(17, 1);
vector<pair<int, int>> moves;
int cnt = 0;

// get target position from parent target and current position

int _i(int k, int t)
{
  if (t == 1)
  {
    return k == 2 ? 3 : 2;
  }
  else if (t == 2)
  {
    return k == 1 ? 3 : 1;
  }
  else
    return k == 1 ? 2 : 1;
}

// recirsive function to solve the [prb]

void solve(int n, int t)
{
  if (n == 1)
  {
    moves.push_back({pos[n], t});
    pos[n] = t;
    cnt++;
  }
  else
  {
    int st = _i(rec[n - 1], t);
    solve(n - 1, st);

    moves.push_back({pos[n], t});
    pos[n] = t;
    cnt++;

    solve(n - 1, t);
    rec[n - 1] = t;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  solve(n, 3);

  cout << cnt << "\n";

  for (auto x : moves)
  {
    cout << x.first << " " << x.second << "\n";
  }
}