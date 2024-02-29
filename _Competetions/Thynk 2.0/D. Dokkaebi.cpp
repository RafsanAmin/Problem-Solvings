#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T-- != 0)
  {

    map<char, string> matrix;

    string key, data;
    cin >>
        key >> data;
    int l = key.length();

    for (int i = 0; i < l * l;)
    {
      for (int j = 0; j < l; j++, i++)
      {
        if (i >= data.length())
        {
          matrix[key[j]] += ".";
        }
        else
        {
          matrix[key[j]] += data[i];
        };
      }
    }

    for (auto x : matrix)
    {
      cout << x.second;
    }
    cout << endl;
  }
}