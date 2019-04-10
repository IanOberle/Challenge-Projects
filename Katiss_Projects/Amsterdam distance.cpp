#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const double pi = 3.141592654;
	double m, n, am, an, bm, bn, gap;
	double radius, dist, dist_check, s, theta;

	cin >> m >> n >> radius;
	cin >> am >> an >> bm >> bn;

	if (am == bm)
	{
		dist = (abs(an - bn) / n) * radius;
		cout << fixed << showpoint << setprecision(6) << dist << endl;
	}
	else if (an == 0 && bn == 0)
		cout << "0\n";
	else if (an == bn)
	{
		theta = (abs(bm - am) * (180 / m)) * (pi / 180);
		s = theta * radius * (bn / n);
		gap = (abs(an - bn) / n)*radius;
		dist = s + gap;
		dist_check = (radius / n)*(an + bn);
		if (dist < dist_check)
			cout << fixed << showpoint << setprecision(6) << dist << endl;
		else if (dist_check < dist)
			cout << fixed << showpoint << setprecision(6) << dist_check << endl;
		else if (dist_check == dist)
			cout << fixed << showpoint << setprecision(6) << dist << endl;
	}
	else
	{
		theta = (abs(bm - am) * (180 / m)) * (pi / 180);
		s = theta * radius * (bn / n);
		gap = (abs(an - bn) / n)*radius;
		dist = s + gap;
		dist_check = (radius / n)*(an + bn);
		if (dist < dist_check)
			cout << fixed << showpoint << setprecision(6) << dist << endl;
		else if (dist_check < dist)
			cout << fixed << showpoint << setprecision(6) << dist_check << endl;
		else if (dist_check == dist)
			cout << fixed << showpoint << setprecision(6) << dist << endl;
	}

	return 0;
}