Provinces and Gold

#include <iostream>
using namespace std;



int main()
{
	int gold, silver, copper, value;

	cin >> gold >> silver >> copper;
	value = (gold * 3) + (silver * 2) + (copper * 1);

	if (value < 2)
		cout << "Copper" << endl;
	else if (value == 2)
		cout << "Estate or Copper" << endl;
	else if (value == 3 || value == 4)
		cout << "Estate or Silver" << endl;
	else if (value == 5)
		cout << "Duchy or Silver" << endl;
	else if (value == 6 || value == 7)
		cout << "Duchy or Gold" << endl;
	else if (value >= 8)
		cout << "Province or Gold" << endl;

	
	system("pause");
	return 0;
}