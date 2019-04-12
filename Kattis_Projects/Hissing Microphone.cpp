Hissing Microphone

#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool check = false;
	string word;

	cin >> word;

	for (int i = 0; i < word.length() - 1; i++)
	{
		if (word[i] == 's' && word[i + 1] == 's')
		{
			check = true;
			cout << "hiss";
			break;
		}
	}

	if (!check)
		cout << "no hiss";
	
	//system("pause");
	return 0;
}