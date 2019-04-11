Spavanac

#include <iostream>

using namespace std;



int main()
{
	int hours, minutes;

	cin >> hours >> minutes;

	if (minutes > 45)
		cout << hours << " " << minutes - 45 << endl;
	else
	{
		if (hours == 0)
			cout << "23 " << (60 - (45 - minutes)) << endl;
		else
			cout << hours - 1 << " " << (60 - (45 - minutes)) << endl;
	}
	system("pause");
	return 0;
}