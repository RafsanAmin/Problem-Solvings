#include <bits/stdc++.h>

using namespace std;

vector<int> temp;

namespace search
{
  int binary_search(vector<int> &num, int key, int lo = 0, int hi = -1)
  {
    if (hi == -1)
      hi = num.size() - 1;
    int mid = floor((hi + lo) / 2);
    if (num[mid] == key)
    {
      return mid;
    }
    else if (hi == lo)
    {
      return -1;
    }
    else if (num[mid] > key)
    {
      binary_search(num, key, lo, mid);
    }
    else if (num[mid] < key)
    {
      binary_search(num, key, mid + 1, hi);
    }
  }
}
namespace sort
{

  // insert your value in right place as you do in real life
  void insertion(vector<int> &arr)
  {
    for (int i = 0; i < arr.size(); i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (arr[i] < arr[j])
        {
          swap(arr[i], arr[j]);
        }
      }
    }
  }
  // put smallest value at start eventually
  void selection(vector<int> &arr)
  {
    for (int i = 0; i < arr.size(); i++)
    {
      for (int j = i + 1; j < arr.size(); j++)
      {
        if (arr[j] < arr[i])
        {
          swap(arr[j], arr[i]);
        }
      }
    }
  }
  // make values sort as well as largest value bubbles to top
  void bubble(vector<int> &arr)
  {
    bool isSorted;
    for (int i = 0; i < arr.size(); i++)
    {
      isSorted = true;
      // Last i elements are already
      for (int j = 1; j < arr.size() - i; j++)
      {
        if (arr[j] < arr[j - 1])
        {
          isSorted = false;
          swap(arr[j], arr[j - 1]);
        }
      }
      if (isSorted)
      {
        break;
      }
    }
  }
  void merge(vector<int> &arr, int lo = 0, int hi = -1)
  {
    if (lo == hi)
    {
      return;
    }
    if (hi == -1)
    {
      hi = arr.size() - 1;
      temp.resize(arr.size());
    }

    int mid = floor((hi + lo) / 2);
    merge(arr, lo, mid);
    merge(arr, mid + 1, hi);

    int i, j, k;
    for (i = lo, j = mid + 1, k = lo; k < hi + 1; k++)
    {
      if (j == hi + 1)
      {
        temp[k] = arr[i++];
      }
      else if (i == mid + 1)
      {
        temp[k] = arr[j++];
      }
      else if (arr[i] < arr[j])
      {
        temp[k] = arr[i++];
      }
      else
      {
        temp[k] = arr[j++];
      }
    }
    for (int l = lo; l < hi + 1; l++)
    {
      arr[l] = temp[l];
    }
    cout << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ofstream s;

  vector<char> set({'A', 'B', 'C', 'D', 'E', 'F'});

  vector<int> s({20, 6, 6, 23, 29, 9, 29, 15, 3, 7, 5, 6, 15, 22, 20, 16, 1, 29, 18, 2});

  s.open("otpt.txt");
}