#include <bits/stdc++.h>

using namespace std;

vector<int> temp;
vector<vector<int>> num;
vector<bool> used;

template <typename T>
void power_set(vector<T> set, ofstream &s)
{
  for (int k = 0; k <= set.size(); k++)
  {
    temp.resize(k);
    used.resize(k);
    combine(0, set.size(), k, 0);
  }
  for (int i = 0; i < num.size(); i++)
  {
    s << "{";
    for (int j = 0; j < num[i].size(); j++)
    {
      s << set[num[i][j]] << (j < num[i].size() - 1 ? "," : "");
    }
    s << "}\n";
  }
  s.close();
}
void combine(int at, int n, int r, int prev)
{
  if (at == r)
  {
    num.push_back(temp);
  }

  for (int i = prev; i < n; i++)
  {
    if (at < r)
    {
      temp[at] = i;
      combine(at + 1, n, r, i + 1);
    }
  }
}

void permute(int at, int size)
{

  if (at == size)
  {
    num.push_back(temp);
  }

  for (int i = 0; i < size; i++)
  {
    if (!used[i])
    {
      used[i] = true;
      temp[at] = i;
      permute(at + 1, size);
      used[i] = false;
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ofstream s;

  vector<char> set({'A', 'B', 'C', 'D', 'E', 'F'});

  s.open("otpt.txt");
  power_set(set, s);
}