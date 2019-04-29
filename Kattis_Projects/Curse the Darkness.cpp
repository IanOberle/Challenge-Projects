Curse the Darkness
/*
You are trying to read in a dark room. The room contains many candles, but none are lit. 
You are considering that it might be worthwhile to light one, but before you do you want to be certain that it will 
actually light your book. You only get to light one and each is bright enough to cast light in a radius of 8 meters. 
You are a stubborn reader and you are not willing to move your book or one of the candles.

Input
Input begins with an integer 0≤m≤50, giving the number of test cases that follow. 
A test case begins with the real-valued X,Y location of your book. 
This is followed by an integer 0≤n≤1000, giving the number of candles in the room and the real-valued X,Y locations of each candle. 
All locations are measured in meters. All real values in the input are in the range −1000 to 1000 and have at most 7 digits
past the decimal point.

Output
For each test case, output “light a candle” if there is a candle close enough to cast light on the position of your book. 
Otherwise, output “curse the darkness”.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Find the distance between the book and a chosen candle
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
		//Find how many candles are close enought to the book
		for (int j = 0; j < numberOfCandles; j++)
		{
			cin >> candle_x >> candle_y;
			check = distance(book_x, book_y, candle_x, candle_y);
			if (check <= 8)
				closeEnough[i]++;
		}
	}
	//Display results
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
