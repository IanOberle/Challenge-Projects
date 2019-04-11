planina

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int iterations, dotsPerLine = 2, totalDots;

	cin >> iterations;
	for (int i = 0; i < iterations; i++)
	{
		dotsPerLine = (2 * dotsPerLine) - 1;
		totalDots = pow(dotsPerLine, 2);
	}
	cout << totalDots << endl;
	
	//system("pause");
	return 0;
}