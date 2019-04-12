#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int holder1 = 0, holder2 = 0, middle = 0, a, b, c;
	string letters;

	cin >> a >> b >> c;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	cin >> letters;
	for (int i = 0; i < 3; i++)
	{
		letters[i] = toupper(letters[i]);
	}
	int highest = arr[0];
	int lowest = arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (highest < arr[i])
		{
			highest = arr[i];
			holder1 = i;
		}
		if (lowest > arr[i])
		{
			lowest = arr[i];
			holder2 = i;
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		if (i != holder1 && i != holder2)
			middle = i;
	}
	
	for (int i = 0; i < 3; i++)
	{
		if (letters[i] == 'C')
			cout << arr.at(holder1) << "  ";
		if (letters[i] == 'B')
			cout << arr.at(middle) << "  ";
		if (letters[i] == 'A')
			cout << arr.at(holder2) << "  ";
	}
	return 0;
}