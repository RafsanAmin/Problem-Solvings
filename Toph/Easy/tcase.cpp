#include <iostream>

using namespace std;

int test(int delta, int time, int memory, int limTime, int limMem)
{
  if (time > limTime)
  {
    return 0;
  }
  if (memory > limMem)
  {
    return 1;
  }
  if (delta > 0)
  {
    return 2;
  }
  else
  {

    return 3;
  }
}

int main()
{
  int err[4] = {0, 0, 0, 0};
  int N, limTime, limMem;
  cin >> N >> limTime >> limMem;
  for (int i = 0; i < N; i++)
  {
    int delta, time, memory;
    cin >> delta >> time >> memory;
    err[test(delta, time, memory, limTime, limMem)]++;
    if (test(delta, time, memory, limTime, limMem) < 3)
    {
      break;
    }
  }
  if (err[0] > 0)
  {
    cout << "CLE\n";
  }
  else if (err[1] > 0)
  {
    cout << "MLE\n";
  }
  else if (err[2] > 0)
  {
    cout << "WA\n";
  }
  else
  {
    cout << "AC\n";
  }
  return 0;
}
