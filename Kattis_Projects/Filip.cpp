Filip

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num_one, num_two, numOneReverse, numTwoReverse;

	cin >> num_one >> num_two;

	for (int i = 2; i >= 0; i--)
	{
		numOneReverse += num_one[i];
		numTwoReverse += num_two[i];
	}

	if (numOneReverse > numTwoReverse)
		cout << numOneReverse;
	else
		cout << numTwoReverse;


	//system("pause");
	return 0;
}