Guess Number
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int guess;
	srand(time(0));

	int target = int((rand()) % 999) + 1;

	for (int i = 0; i < 10; i++)
	{
		//User input
		//cin >> guess;

		//Random Generation
		//guess = int((rand()) % 999) + 1;
		if (target < guess)
			cout << "lower" << endl;
		else if (target > guess)
			cout << "higher" << endl;	
		else
		{
			cout << "correct" << endl;
			exit(0);
		}
		cout.flush();
	}
	
	//system("pause");
	return 0;
}