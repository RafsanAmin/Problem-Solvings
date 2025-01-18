#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, sum, towerSize;
  vector<int> towers;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int temp;
    cin >> temp;
    if (temp != 0)
    {

      towers.push_back(temp);
    }
  }
  sort(towers.begin(), towers.end());

  if (towers.size() >= 2)
  {
    sum = towerSize = towers[0] + towers[1];
    for (int i = 2; i < towers.size(); i++)
    {

      sum += towers[i] + towerSize;
      towerSize += towers[i];
    }
    cout << sum;
    return 0;
  }
  else
  {
    cout << 0;
  }
}
