#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	int cases, vec_size, small_hold = 0, carat_counter = 0;
	long long powers = 0;
	bool special_case = false;
	string holder;
	vector<string> V;
	vector<int> num;
	
	cin >> cases;
	vector<vector<int>> hold_num;
	hold_num.resize(cases, vector<int>(2, 0));

	
	for (int i = 0; i < cases; i++)
	{
		cin >> holder;
		hold_num[i][1] = i;
		V.push_back(holder);
		carat_counter = 0;
		special_case = false;
		for (int m = 0; m < holder.size(); m++)
		{
			if (holder[m] == '^')
				carat_counter++;
		}
		
		for (int j = 0; j < holder.size(); j++)
		{
			if (holder[j] == '^')
				continue;

			else if (carat_counter == 0)
			{
				small_hold = 0;
				for (int h = 0; h < holder.size(); h++)
				{
					small_hold += int((holder[h]-48) * pow(10,holder.size()-(h+1)));
				}
				num.push_back(small_hold);
				special_case = true;
			}
			else if (isdigit(holder[j]) && isdigit(holder[j + 1]) && isdigit(holder[j + 2]))
			{
				num.push_back(((holder[j] - 48) * 100) + ((holder[j + 1] - 48) * 10) + (holder[j + 2] - 48));
				j += 2;
			}
			else if (isdigit(holder[j]) && isdigit(holder[j + 1]))
			{
				num.push_back(((holder[j] - 48) * 10) + (holder[j + 1] - 48));
				j += 1;
			}
			else if (isdigit(holder[j]))
			{
				num.push_back(holder[j] - 48);
			}
		}
		
		powers = 0;
		vec_size = num.size();
		if (special_case == true)
		{
			powers = num.at(0);
		}
		else if (num.size() == 2)
		{
			powers = int(pow(num.at(vec_size - 2), num.at(vec_size - 1)));
		}
		else if (num.size() > 2)
		{
			powers = int(pow(num.at(vec_size - 2), num.at(vec_size - 1)));
			for (int k = (vec_size - 3); k >= 0; k--)
			{
				powers = int(pow(num.at(k),powers));
			}
		}
		hold_num[i][0] = int(powers);
		num.clear();
	}

	int temp, temp2, count = 1;
	while (count > 0)
	{
		count = 0;
		for (int i = 0; i < cases - 1; i++)
		{
			if (hold_num[i][0] > hold_num[i + 1][0])
			{
				temp = hold_num[i][0];
				temp2 = hold_num[i][1];
				hold_num[i][0] = hold_num[i + 1][0];
				hold_num[i][1] = hold_num[i + 1][1];
				hold_num[i + 1][0] = temp;
				hold_num[i + 1][1] = temp2;
				count++;
			}
		}
	}

	cout << "\nCase 1:";
	for (int i = 0; i < cases; i++)
		cout << endl << V.at(hold_num[i][1]);
	cout << endl;

	return 0;
}