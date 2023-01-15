#include <bits/stdc++.h>

using namespace std;

template <typename T>
void printV(vector<T> &arr)
{
  cout << endl;
  for (T x : arr)
  {
    cout << x << ", ";
  }
  cout << endl;
}

int main()
{
  int Total, start, i = 1;

  cin >> Total >> start;

  vector<int> arr;

  while (i <= Total)
  {
    if (i >= start)
    {
      arr.push_back(i + 1);
      i += 2;
    }
    else
    {
      arr.push_back(i);
      i++;
    }
  }
  printV<int>(arr);

  if (arr[arr.size() - 1] == Total)
  {
    i = 1;
  }
  else
  {
    arr.pop_back();
    i = 0;
  }
  printV<int>(arr);

  while (1)
  {
    arr.erase(arr.begin() + i);

    if (arr.size() == 1)
    {
      break;
    }
    printV<int>(arr);

    i += 2;
    if (i == arr.size())
    {
      i = 1;
    }
    else if (i == arr.size() - 1)
    {
      i = 0;
    }
  }
  cout << arr[0] << endl;
}