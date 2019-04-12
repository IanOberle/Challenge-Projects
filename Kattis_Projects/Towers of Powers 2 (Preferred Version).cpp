Towers of Powers 2

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int findTowerValue(string entered_numbers)
{
	int j = 0, next_power = 0, base = 0, power = 0;
	string hold_value = "";
	vector<string> string_to_value;
	
	for (int i = 0; i < entered_numbers.size(); i++)
	{
		if (entered_numbers[i] != '^')
			hold_value = hold_value + entered_numbers[i];
		else
		{
			string_to_value.push_back(hold_value);
			hold_value = "";
			j++;
		}
	}
	string_to_value.push_back(hold_value);
	
	if (j > 0)
	{
		power = stoi(string_to_value.at(string_to_value.size()-1));
		base = stoi(string_to_value.at(string_to_value.size() - 2));
		next_power = pow(base, power);
		if (string_to_value.size() == 2)
			return next_power;
	}
	else
		return stoi(hold_value);

	for (int i = 3; i <= string_to_value.size(); i++)
	{
		power = next_power;
		base = stoi(string_to_value.at(string_to_value.size() - i));
		next_power = pow(base, power);
	}
	return next_power;
}

void sortValues(vector<string> entered_numbers, vector<int> values, int cases)
{
	string temp_num;
	int temp_value;

	for (int i = 0; i < cases - 1; i++)
	{
		for (int j = i+1; j < cases; j++)
		{
			if (values[j] < values[i])
			{
				temp_value = values[j];
				values[j] = values[i];
				values[i] = temp_value;

				temp_num = entered_numbers[j];
				entered_numbers[j] = entered_numbers[i];
				entered_numbers[i] = temp_num;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < cases; i++)
		cout << entered_numbers[i] << endl;
}

int main()
{
	int cases;
	string pass_to_vector;
	vector<string> entered_numbers;
	vector<int> values;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> pass_to_vector;
		entered_numbers.push_back(pass_to_vector);
		values.push_back(findTowerValue(pass_to_vector));
	}
	if (cases > 0)
		sortValues(entered_numbers, values, cases);
	
	
	return 0;
}