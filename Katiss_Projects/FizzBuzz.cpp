FizzBuzz
#include <iostream>
using namespace std;

int main()
{
	int Fizz, Buzz, N;

	cin >> Fizz >> Buzz >> N;

	for (int i = 1; i < N + 1; i++)
	{
		if (i % Fizz == 0 && i % Buzz == 0)
			cout << "FizzBuzz\n";
		else if (i % Fizz == 0)
			cout << "Fizz\n";
		else if (i % Buzz == 0)
			cout << "Buzz\n";
		else
			cout << i << endl;
	}

	
	return 0;
}