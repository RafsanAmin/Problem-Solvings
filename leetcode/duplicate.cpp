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

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {

    int deleted = 0;             // how many deleted
    int totalSize = nums.size(); // getting total size
    int temp = 0;                // temp index

    for (int i = 1; i < totalSize; i++)
    {
      if (nums[i] == nums[temp])
      {
        deleted++;
      }
      else
      {
        nums[++temp] = nums[i]; // can't explain :( without animation
      }
    }

    // nums.resize(totalSize - deleted) !not required but you can do it

    return totalSize - deleted;
  }
};

int main()
{
  Solution sol;
  vector<int> vec1({0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4});

  printV<int>(vec1);

  cout << sol.removeDuplicates(vec1);

  printV<int>(vec1);

  return 0;
}