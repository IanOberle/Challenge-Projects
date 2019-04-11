Pot

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int cases, number, sum = 0;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> number;
		number = pow((number / 10), (number % 10));
		sum += number;
	}
	cout << sum << endl;
	
	//system("pause");
	return 0;
}