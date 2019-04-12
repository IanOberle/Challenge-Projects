Digit Sum

#include <iostream>
#include <string>
//#include <time.h>
using namespace std;

int main()
{
	int cases, a, b, sum;
	string numbers;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> a >> b;
		//clock_t tStart = clock();
		sum = 0;
		numbers = "";

		for (int j = a; j <= b; j++)
			numbers += to_string(j);
		
		for (int j = 0; j < numbers.length(); j++)
			sum += (int(numbers[j]) - 48);

		cout << "Sum Final: " << sum << endl;
		//printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	}
	//system("pause");
	return 0;
}