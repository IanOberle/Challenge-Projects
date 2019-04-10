Sum Kind of Problem

#include <iostream>
using namespace std;

int main()
{
	int cases, dataset_number, dataset, sum1, sum2, sum3;
	
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		sum1 = 0;
		sum2 = 0;
		sum3 = 0;

		cin >> dataset_number >> dataset;
		for (int j = 0; j < dataset; j++)
		{
			sum1 += j + 1;
			sum2 += (j * 2) + 1;
			sum3 += (j * 2) + 2;
		}
		cout << dataset_number << " " << sum1 << " " << sum2 << " " << sum3 << endl << endl;
	}

	return 0;
}