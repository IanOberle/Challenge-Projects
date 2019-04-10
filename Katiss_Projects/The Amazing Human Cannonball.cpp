The Amazing Human Cannonball


#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	int cases;
	float velocity, distance, angle, height1, height2, time, finalHeight;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> velocity >> angle >> distance >> height1 >> height2;
		angle *= (3.141592654 / 180);
		time = distance / (velocity * cos(angle));
		finalHeight = (velocity * time * sin(angle) - (.5 * 9.81 * pow(time, 2)));
		if (finalHeight >= (height1 + 1) && finalHeight <= (height2 - 1))
			cout << "Safe" << endl;
		else
			cout << "Not Safe" << endl;
	}

	//system("pause");
	return 0;
}