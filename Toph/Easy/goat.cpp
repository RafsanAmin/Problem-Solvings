#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  int arr[T], max = 1;
  // input
  for (int i = 0; i < T; i++)
  {
    string s;
    cin >> s;
    int l = s.length();

    arr[i] = l - (l == 2 ? 0 : 2 - l % 2);

    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  // output
  for (int x : arr)
  {
    for (int i = 0; i < (max - x) / 2; i++)
    {
      cout << " ";
    }
    cout << "b";
    for (int i = 0; i < x; i++)
    {
      cout << "a";
    }
    cout << "\n";
  }
}