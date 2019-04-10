Curse the Darkness
#include <iostream>
#include <cmath>
using namespace std;

double distance(double book_x, double book_y, double candle_x, double candle_y)
{
	double magnitude;
	magnitude = sqrt(pow(book_x - candle_x, 2) + pow(book_y - candle_y, 2));
	return magnitude;
}
int main()
{
	int numberOfCases, numberOfCandles;
	double book_x, book_y, candle_x, candle_y, check;
	int * closeEnough = nullptr;

	cin >> numberOfCases;
	closeEnough = new int[numberOfCases]();
	for (int i = 0; i < numberOfCases; i++)
	{
		
		cin >> book_x >> book_y;
		cin >> numberOfCandles;
		for (int j = 0; j < numberOfCandles; j++)
		{
			cin >> candle_x >> candle_y;
			check = distance(book_x, book_y, candle_x, candle_y);
			if (check <= 8)
				closeEnough[i]++;
		}
	}
	
	for (int i = 0; i < numberOfCases; i++)
	{
		if (closeEnough[i] >= 1)
			cout << "light a candle" << endl;
		else
			cout << "curse the darkness" << endl;
	}

	delete[] closeEnough;
	closeEnough = nullptr;
	
	return 0;
}