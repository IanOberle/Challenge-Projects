Zamka

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int minRange, maxRange, min, max, sum, usableSum ;
	string search;
	vector<int> valid;

	cin >> minRange >> maxRange >> sum;

	for (int i = minRange; i <= maxRange; i++)
	{
		search = to_string(i);
		usableSum = 0;
		for (int j = 0; j < search.length(); j++)
		{
			if (search[j] == '0')
				continue;
			usableSum += int(search[j] - 48);			
		}
		if (usableSum == sum)
			valid.push_back(stoi(search));
	}

	max = *max_element(valid.begin(), valid.end());
	min = *min_element(valid.begin(), valid.end());
	cout << min << endl << max << endl;

	//system("pause");
	return 0;
}