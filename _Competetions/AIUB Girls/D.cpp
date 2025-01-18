#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  deque<int> packet;
  for (int t = 0; t < T; t++)
  {
    int q, x, y;
    cin >> q;
    if (q == 1)
    {
      cin >> x >> y;
      for (int i = 0; i < y; i++)
      {
        packet.push_front(x);
      }
    }
    else if (q == 2)
    {
      cin >> x >> y;
      for (int i = 0; i < y; i++)
      {
        packet.push_back(x);
      }
    }
    else if (q == 3 && !packet.empty())
    {
      cin >> y;
      for (int i = 0; i < y; i++)
      {

        packet.pop_front();
      }
    }
    else if (q == 4 && !packet.empty())
    {
      cin >> y;
      for (int i = 0; i < y; i++)
      {
        packet.pop_back();
      }
    }
    else if ((q == 5 || q == 6) && packet.empty())
    {
      cout << -1 << "\n";
    }
    else if (q == 5)
    {
      cout << packet.front() << "\n";
    }
    else if (q == 6)
    {
      cout << packet.back() << "\n";
    }
  }
}