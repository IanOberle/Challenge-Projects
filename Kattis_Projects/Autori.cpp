Autori

#include <iostream>
#include <string>
using namespace std;


int main()
{
	string names, initials;

	cin >> names;
	for (int i = 0; i < names.length() - 1; i++)
	{
		if (isupper(names[i]))
		{
			initials += names[i];
		}
	}
	
	cout << initials << endl;

	//system("pause");
	return 0;
}