Quality-Adjusted Life-Year

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cases;
	float quality, years, overall = 0;

	cin >> cases;

	for (int i = 0; i < cases; i++)
	{
		cin >> quality >> years;
		overall += (quality * years);
	}
	cout << fixed << setprecision(3) << overall;
	//system("pause");
	return 0;
}