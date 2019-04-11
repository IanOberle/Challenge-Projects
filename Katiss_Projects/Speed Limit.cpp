Speed Limit

#include <iostream>

using namespace std;



int main()
{
	int segments = 0, distance, distanceTotal = 0, time1 = 0, time2;

	cin >> segments;
	while(segments != -1)
	{
		for (int i = 0; i < segments; i++)
		{
			cin >> distance >> time2;
			distanceTotal += (distance * (time2 - time1));
			time1 = time2;
		}
		cout << distanceTotal << " miles" << endl;
		cin >> segments;
		distanceTotal = 0;
		time1 = 0;
	}
	//system("pause");
	return 0;
}