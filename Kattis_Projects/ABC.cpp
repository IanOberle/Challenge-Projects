/* Kattis Project Description
You will be given three integers A, B and C. The numbers will not be given in that exact order, 
but we do know that A is less than B and B less than C. In order to make for a more pleasant viewing, 
we want to rearrange them in a given order.

Input
The first line contains the three positive integers A, B and C, not necessarily in that order. 
The three numbers will be less than or equal to 100. The second line contains three uppercase letters 
’A’, ’B’ and ’C’ (with no spaces between them) representing the desired order.

Output
Output A, B and C in the desired order on a single line, separated by single spaces.
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int holder1 = 0, holder2 = 0, middle = 0, a, b, c;
	string letters;

	//Enter in numbers A-C and enter a display order
	cin >> a >> b >> c;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	cin >> letters;
	
	for (int i = 0; i < 3; i++)
	{
		letters[i] = toupper(letters[i]);
	}
	
	//Searching for the highest number "C" and the lowest number "A"
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
	
	//Determine which value is "B"
	for (int i = 0; i < 3; i++)
	{
		if (i != holder1 && i != holder2)
			middle = i;
	}
	
	//Display numbers in the order specified
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
