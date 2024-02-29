#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  cin >> input; // taking input

  // as it will be like "10ffy". we will skip scanning last 3 index start counting from end
  for (int i = input.size() - 4; i >= 0; i--)
  {
    if (input[i] < '9') // if the char is less than 9 then add 1 to it.
    {
      input[i]++;
      break;
    }
    else if (input[i] == '9') // if the char is equals to 9 then make it zero and add one to left
    {
      input[i] = '0';
      i == 0 ? (input.insert(input.begin(), '1')) : input.begin(); // check if it at the end
    }
  }
  cout << input;
}