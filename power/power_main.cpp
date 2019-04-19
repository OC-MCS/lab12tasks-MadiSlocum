#include <iostream>
using namespace std;

int power(int base, int expo); 

int main()
{
	int base, expo;

	cout << "Enter your base #" << endl;
	cin >> base;
	cout << "Enter your exponent (non-negative)" << endl;
	cin >> expo;

	int result = power(base, expo);

	cout << result << endl;

	return 0;
}


int power(int base, int expo)
{
	if (expo == 0)
	{
		return 1;
	}
	else if (expo % 2 == 0)
	{
		return base * base;
	}
	else
	{
		return base * power(base, (expo - 1));
	}
		
}