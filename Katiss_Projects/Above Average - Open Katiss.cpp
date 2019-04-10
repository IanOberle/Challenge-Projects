Above Average - Open Katiss

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int numberOfGroups, groupsize, sum, groupAboveAverageCount, k = 0;
	float groupAverage;
	int * group = nullptr;
	float * conclusion = nullptr;

	srand(time(0));

	//numberOfGroups = int((rand() % 49) + 1);
	//cout << "Number of Groups: " << numberOfGroups << endl;
	cin >> numberOfGroups;
	conclusion = new float[numberOfGroups];
	try
	{
		for (int i = 0; i < numberOfGroups; i++)
		{
			sum = 0;
			//groupsize = int(rand() % 1000);
			//cout <<"Group: " << i << " Group Size: " << groupsize << endl;
			cin >> groupsize;
			if (groupsize < 0)
			{
				cout << "Exiting\n";
				delete[] group;
				delete[] conclusion;
				group = nullptr;
				conclusion = nullptr;
				system("pause");
				exit(0);
			}
			group = new int[groupsize];
			
			for (int j = 0; j < groupsize; j++)
			{
				/*group[j] = int(rand() % 100);
				if (j % 35 == 0)
					cout << "\n"; 
				cout << setw(3) << right << group[j];*/
				cin >> group[j];
				sum += group[j];
			}
			cout << endl << endl;
			groupAverage = float(sum) / groupsize;
			
			groupAboveAverageCount = 0;
			for (int j = 0; j < groupsize; j++)
			{
				if (group[j] > groupAverage)
				{
					groupAboveAverageCount++;
				}
			}
			conclusion[i] = float(groupAboveAverageCount) / groupsize;
			delete[] group;
			group = nullptr;
		}
		cout << endl;
		for (int i = 0; i < numberOfGroups; i++)
		{
			cout << fixed << setprecision(3) << conclusion[i] * 100 << "%" << endl;
			//cout << fixed << setprecision(3) << "Conclusion " << i << ": " << conclusion[i] * 100 << "%" << endl;
		}
		
		delete[] conclusion;
		conclusion = nullptr;
		
	}
	catch (int e)
	{
		cout << "An error has occured" << endl;
		cout << e << endl;
		delete[] group;
		delete[] conclusion;
	}

	system("pause");
	return 0;
}