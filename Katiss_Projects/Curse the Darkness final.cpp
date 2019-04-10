#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	vector<int> V;
	int m, n, count = 0;
	float x1, y1;
	const short size_x = 1000, size_y = 2;
	float distance;
	float loc[size_x][size_y];
	float change_x, change_y;

	cin >> m;
	for (int a = 0; a < m; a++)
	{
		cin >> x1 >> y1;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				cin >> loc[i][j] >> loc[i][j + 1];
			}
		}

		for (int i = 0; i < n; i++)
		{
			count = 0;
			for (int j = 0; j < 1; j++)
			{
				change_x = x1 - loc[i][j];
				change_y = y1 - loc[i][j + 1];
				distance = sqrt(pow(change_x, 2) + pow(change_y, 2));
				if (distance < 8)
					count++;
			}
		}
		if (count > 0)
			V.push_back(1);
		else
			V.push_back(0);
	}

	for (int i = 0; i < V.size(); i++)
	{
		if (V.at(i) == 0)
			cout << "curse the darkness\n";
		else
			cout << "light a candle\n";
	}

	return 0;
}