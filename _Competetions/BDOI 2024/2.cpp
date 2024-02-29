#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T-- != 0)
  {
    // write your code here
    int H, bound = 0;
    bool fnd = true;
    vector<int> hats;
    string list;
    cin >> H;
    for (int i = 1; i <= H; i++)
    {
      int temp;
      cin >> temp;
      hats.push_back(temp);
    }
    cin >> list;
    for (int i = 1; i <= H; i++)
    {
      if (list[i - 1] == '1')
      {
        bool found = false;

        for (int j = i; j > bound; j--)
        {
          if (hats[j - 1] == i)
          {
            bound = j;
            found = true;
            break;
          }
        }
        if (!found)
        {

          fnd = false;
          break;
        }
      }
    }
    if (fnd)
    {
      cout << "YES" << (T == 0 ? "" : "\n");
    }
    else
    {
      cout << "NO" << (T == 0 ? "" : "\n");
    }
  }
}