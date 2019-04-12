Trik

#include <iostream>
#include <string>
using namespace std;

void swap(int swap_one, int swap_two, int positions[])
{
	int temp = positions[swap_one];
	positions[swap_one] = positions[swap_two];
	positions[swap_two] = temp;
}

int main()
{
	string moves;
	int positions[3] = { 1, 0, 0 };

	cin >> moves;
	for (int i = 0; i < moves.length(); i++)
	{
		if (moves[i] == 'A')
			swap(0, 1, positions);
		else if (moves[i] == 'B')
			swap(1, 2, positions);
		else
			swap(0, 2, positions);
	}

	for (int i = 0; i < 3; i++)
	{
		if (positions[i] == 1)
			cout << i + 1 << endl;
	}

	//system("pause");
	return 0;
}