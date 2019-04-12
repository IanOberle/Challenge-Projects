#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	string word;
	int count = 0, count2 = 0, simplicity, random;

	/*srand(time(0));

	random = int((rand() % 2) + 1);*/

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == 0)
		{
			continue;
		}
		count = 0;
		for (int j = i+1; j < word.size() + 1; j++)
		{
			if (word[i] == word[j])
			{
				word[j] = 0;
			}
			count++;
		}
		if (count > 0)
			count2++;
	}
	if (count2 > 2)
	{
		simplicity = count2 - 2;
		cout << simplicity << endl;
	}
	else
		cout << "0" << endl;


	return 0;
}