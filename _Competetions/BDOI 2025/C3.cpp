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
    int n, ind = -1, a, b, i1, i2;
    cin >> n;
    bool f1 = false, f2 = false;
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

    for (int i = 0; i < n - 1; i++)
    {
      if (B[i] != B[i + 1])
      {
        a = B[i];
        b = B[i + 1];
        ind = i;
      }
    }
    if (ind == -1)
    {
      for (int i = 0; i < n; i++)
      {
        if (A[i] == B[0])
        {
          f1 = true;
          ind = i + 1;
        }
      }

      if (f1)
      {
        cout << "YES 1\n1 " << n << " " << ind << "\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
    else
    {
      for (int i = 0; i < ind; i++)
      {
        if (A[i] == B[ind])
        {
          f1 = true;
          i1 = i + 1;
        }
      }

      for (int i = 0; i < n; i++)
      {
        if (A[i] == B[ind])
        {
          f1 = true;
          i1 = i + 1;
          break;
        }
      }

      for (int i = i1; i < n; i++)
      {
        if (A[i] == B[ind + 1])
        {
          f2 = true;
          i2 = i + 1;
        }
      }

      if (f1 && f2)
      {

        if (i2 <= ind + 1)
        {
          cout << "YES 2\n"
               << i2 << " " << n << " " << i2 << "\n"
               << 1 << " " << ind + 1 << " " << i1 << "\n";
        }
        else if (i1 > ind + 1)
        {
          cout << "YES 2\n"
               << 1 << " " << i1 << " " << i1 << "\n"
               << ind + 2 << " " << n << " " << i2 << "\n";
        }
        else
        {

          cout << "YES 2\n1 " << ind + 1 << " " << i1 << "\n"
               << ind + 2 << " " << n << " " << i2 << "\n";
        }
      }
      else
      {
        cout << "NO" << "\n";
      }
    }
  }
}