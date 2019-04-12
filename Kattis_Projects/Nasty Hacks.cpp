Nasty Hacks

#include <iostream>

using namespace std;



int main()
{
	int cases, noAds, Ads, costOfAds;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> noAds >> Ads >> costOfAds;
		if (noAds > (Ads - costOfAds))
			cout << "do not advertise" << endl;
		else if (noAds < (Ads - costOfAds))
			cout << "advertise" << endl;
		else
			cout << "does not matter" << endl;
	}

	//system("pause");
	return 0;
}