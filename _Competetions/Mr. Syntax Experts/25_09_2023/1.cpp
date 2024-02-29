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
    // write your code here
    int N;
    int array[100000] = {0};
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
      int x;
      cin >> x;
      array[x - 1]++;
    }
    int i = 0;
    while (array[i] != 0)
    {
      i++;
    };
    cout << i + 1 << endl;
  }
}