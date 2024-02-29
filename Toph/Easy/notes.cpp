#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int num;
  int notes[6][2] = {{1, 0}, {5, 0}, {10, 0}, {50, 0}, {100, 0}, {500, 0}};

  cin >> num;

  for (int i = 5; i >= 0; i--)
  {
    notes[i][1] = num / notes[i][0];
    num = num % notes[i][0];
  }

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < notes[i][1]; j++)
    {
      cout << notes[i][0] << " ";
    }
  }
}