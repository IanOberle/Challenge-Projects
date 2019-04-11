Oddities

#include <iostream>

using namespace std;



int main()
{
	int cases, number;

	cin >> cases;

	for (int i = 0; i < cases; i++)
	{
		cin >> number;
		if (number % 2 == 0)
			cout << number << " is even" << endl;
		else
			cout << number << " is odd" << endl;
	}


	//system("pause");
	return 0;
}