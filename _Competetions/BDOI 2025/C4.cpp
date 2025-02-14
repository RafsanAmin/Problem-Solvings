#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++)
  {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
      cin >> B[i];
    }

    int i = 0, j = 0;

    while (i < n && j < n)
    {
      if (A[i] == B[j])
      {
        j++;
      }
      else
      {
        i++;
      }
    }

    if (j == n)
    {
      cout << "YES -1" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
}