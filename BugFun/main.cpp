#include <iostream>
using namespace std;

int imBroken(int num1, int num2);

int main()
{
	int a;

	a = imBroken(10, 5);

	cout << a << endl;
	a = imBroken(10, 0);

	return 0;
}

int imBroken(int num1, int num2)
{
	int result = 0;

	if (num2 != 0)
	{
		result = num1 / num2;
	}
	else
	{
		throw invalid_argument("Cannot divide by 0");
	}

	return result;
}