#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  short int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, max = 0;
  cin >> s;

  for (char x : s)
  {
    arr[(int)x - 48]++;
  }

  for (int i = 1; i < 10; i++)
  {
    if (arr[i] > arr[max])
    {
      max = i;
    }
  }

  cout << max << endl;
}