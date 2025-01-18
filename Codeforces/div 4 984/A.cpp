#include <bits/stdc++.h>

using namespace std;

int arr[50];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n;
    bool perfect = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
      int diff = abs(arr[i] - arr[i + 1]);
      if (diff != 5 && diff != 7)
      {
        perfect = false;
      }
    }

    if (perfect)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}