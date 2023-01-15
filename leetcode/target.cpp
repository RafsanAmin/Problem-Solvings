#include <bits/stdc++.h>

using namespace std;

template <typename T>
void printV(vector<T> &arr)
{
  cout << "\n\n[";
  for (T x : arr)
  {
    cout << x << ", ";
  }
  cout << "]\n\n";
}

class Solution
{
public:
  static int searchInsert(vector<int> &nums, int target)
  {
    int start = 0;
    int end = nums.size() - 1;
    int avg;

    while (start <= end)
    {
      avg = floor((start + end) / 2);

      if (nums[avg] == target)
      {
        return avg;
        break;
      }
      else if (target > nums[avg])
      {
        start = avg + 1;
      }
      else if (target < nums[avg])
      {
        end = avg - 1;
      }
    }
    return start;
  }
};

int hell(int i, int b)
{
}
int main()
{
  int testNum;

  vector<int> vec1({1, 3});
  while (1)
  {
    printV<int>(vec1);
    cout << "Your Desired Number: ", cin >> testNum;
    cout << "\nProcess--->\n\n";
    if (testNum == -101)
    {
      break;
    }

    cout << "\nYour Position is or would be: " << Solution::searchInsert(vec1, testNum) << "\n\n-------------";
  }

  return 0;
}