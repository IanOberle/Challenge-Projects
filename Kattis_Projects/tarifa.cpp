#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> V;
	int meg, months, holder, sum = 0;

	cin >> meg;
	cin >> months;

	for (int i = 0; i < months; i++)
	{
		cin >> holder;
		V.push_back(holder);
	}

	for (int i = 0; i < months; i++)
	{
		sum += meg - V.at(i);
	}

	cout << sum + meg << endl;
	return 0;
}