Sibice

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int numMatches, length, width, matchLength;

	cin >> numMatches >> length >> width;

	for (int i = 0; i < numMatches; i++)
	{
		cin >> matchLength;
		if (matchLength <= length || matchLength <= width)
		{
			cout << "DA" << endl;
		}
		else if (matchLength <= sqrt(pow(length, 2) + pow(width, 2)))
		{
			cout << "DA" << endl;
		}
		else
			cout << "NE" << endl;
	}

	
	//system("pause");
	return 0;
}