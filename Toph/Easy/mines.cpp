#include <bits/stdc++.h>

using namespace std;

void oI(char &s)
{
	if (s != '*')
	{
		s++;
	}
}

int main()
{
	int R, C;
	char c;
	cin >> R >> C;
	vector<vector<char>> grid(R + 2, vector<char>(C + 2, '0'));

	for (int i = 0; i < R + 2; i++)
	{
		if (i == 0 || i == R + 1)
		{
			for (int j = 0; j < C + 2; j++)
			{
				grid[i][j] = '*';
			};
		}
		else
		{
			grid[i][0] = '*';
			grid[i][C + 1] = '*';
		}
	}

	for (int i = 1; i < R + 1; i++)
	{
		for (int j = 1; j < C + 1; j++)
		{
			cin >> c;
			if (c == '*')
				grid[i][j] = c;
		};
	}

	for (int i = 1; i < R + 1; i++)
	{
		for (int j = 1; j < C + 1; j++)
		{
			c = grid[i][j];
			if (c == '*')
			{
				oI(grid[i - 1][j - 1]);
				oI(grid[i - 1][j]);
				oI(grid[i - 1][j + 1]);
				oI(grid[i][j - 1]);
				oI(grid[i][j + 1]);
				oI(grid[i + 1][j - 1]);
				oI(grid[i + 1][j]);
				oI(grid[i + 1][j + 1]);
			}
		};
	}

	for (int i = 1; i < R + 1; i++)
	{
		for (int j = 1; j < C + 1; j++)
		{
			cout << (grid[i][j] == '0' ? '.' : grid[i][j]);
		};
		cout << (i == R ? "" : "\n");
	}

	return 0;
}