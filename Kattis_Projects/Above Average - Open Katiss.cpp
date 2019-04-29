/*Kattis Project Description
Input
The first line of standard input contains an integer 1≤C≤50, the number of test cases. 
C data sets follow. Each data set begins with an integer, N, the number of people in the class (1≤N≤1000). 
N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100)
of a student in the class.

Output
For each case you are to output a line giving the percentage of students whose grade 
is above average, rounded to exactly 3 decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int numberOfGroups, groupsize, sum, groupAboveAverageCount, k = 0;
	float groupAverage;
	int * group = nullptr;
	float * conclusion = nullptr;

	//Enter number of test groups
	cin >> numberOfGroups;
	conclusion = new float[numberOfGroups];
	
	//Find the test average for each group
	for (int i = 0; i < numberOfGroups; i++)
	{
		sum = 0;
		cin >> groupsize;
		
		//Quit program and delete pointers if invalid size is entered
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
			
		//Create group total
		for (int j = 0; j < groupsize; j++)
		{
			cin >> group[j];
			sum += group[j];
		}
		cout << endl << endl;
		
		//Find group average
		groupAverage = float(sum) / groupsize;
			
		//Find number of students above average
		groupAboveAverageCount = 0;
		for (int j = 0; j < groupsize; j++)
		{
			if (group[j] > groupAverage)
			{
				groupAboveAverageCount++;
			}
		}
		//Percentage of students above average
		conclusion[i] = float(groupAboveAverageCount) / groupsize;
		
		//Reset for next group
		delete[] group;
		group = nullptr;
	}
	
	//Display final conclusions
	cout << endl;
	for (int i = 0; i < numberOfGroups; i++)
	{
		cout << fixed << setprecision(3) << conclusion[i] * 100 << "%" << endl;
	}
		
	//Delete final pointer and set to null
	delete[] conclusion;
	conclusion = nullptr;
		
	return 0;
}
