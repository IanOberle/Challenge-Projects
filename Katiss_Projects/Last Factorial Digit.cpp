Last Factorial Digit

#include <iostream>
using namespace std;

int main()
{
	int cases, factorial_case, factorial, lastnum;

	cin >> cases;

	for (int i = 0; i < cases; i++)
	{
		factorial = 1;
		cin >> factorial_case;
		for (int j = 1; j <= factorial_case; j++)
		{
			factorial *= j;
		}
		lastnum = factorial % 10;
		cout << lastnum << endl;
	}

	//system("pause");
	return 0;
}