Faktor

#include <iostream>
using namespace std;


int main()
{
	int articles, impact, result;

	cin >> articles >> impact;
	result = (articles * (impact - 1)) + 1;
	cout << result << endl;
	   	
	//system("pause");
	return 0;
}