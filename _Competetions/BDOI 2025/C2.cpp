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
    int n, ind;
    cin >> n;
    bool found = false;
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

    for (int i = 0; i < n; i++)
    {
      if (A[i] == B[0])
      {
        found = true;
        ind = i + 1;
      }
    }

    if (found)
    {
      cout << "YES 1\n1 " << n << " " << ind << "\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}