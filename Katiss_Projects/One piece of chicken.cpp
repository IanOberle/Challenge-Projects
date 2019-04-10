#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	if (n == m)
	{
		m += 1;
	}
	if ((n - m) == -1)
		cout << "Dr. Chaz will have " << abs(n - m) << " piece of chicken left over!";
	else if ((n - m) == 1)
		cout << "Dr. Chaz needs " << abs(n - m) << " more piece of chicken!\n";
	else if (n < m)
		cout << "Dr. Chaz will have " << abs(n - m) << " pieces of chicken left over!";
	else if (n > m)
		cout << "Dr. Chaz needs " << abs(n - m) << " more pieces of chicken!\n";
	return 0;
}