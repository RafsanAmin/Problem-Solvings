#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;
  vector<vector<int>> schedule;
  for (int i = 0; i < N; i++)
  {
    int X, Y;
    cin >> X >> Y;
    vector<int> l({X, Y});
    schedule.push_back(l);
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N - 1; j++)
    {
      if (schedule[j] > schedule[j + 1])
      {
        schedule[j].swap(schedule[j + 1]);
      }
    }
  }
  for (int i = 0; i < N - 1; i++)
  {
    if (schedule[i + 1][0] >= schedule[i][0] && schedule[i + 1][0] <= schedule[i][1])
    {
      schedule[i + 1][0] = schedule[i][0];
      schedule[i][0] = -1;
    }
    if (schedule[i + 1][1] >= schedule[i][0] && schedule[i + 1][1] <= schedule[i][1])
    {
      schedule[i + 1][1] = schedule[i][1];
      schedule[i][1] = -1;
    }
  }
  for (int i = 0; i < N; i++)
  {
    if (schedule[i][1] != -1 && schedule[i][0] != -1)
    {
      cout << schedule[i][0] << " " << schedule[i][1] << endl;
    }
  }
}