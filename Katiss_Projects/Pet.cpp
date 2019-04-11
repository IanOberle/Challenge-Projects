Pet

#include <iostream>

using namespace std;



int main()
{
	int grade_in, grade, contestant_number = 1, grade_holder = 0, number_holder;

	for (int i = 0; i < 5; i++)
	{
		grade = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> grade_in;
			grade += grade_in;
		}
		if (grade > grade_holder)
		{
			grade_holder = grade;
			number_holder = contestant_number;
		}
		contestant_number++;
	}
	
	cout << number_holder << " " << grade_holder << endl;

	//system("pause");
	return 0;
}