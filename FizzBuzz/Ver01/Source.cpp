#include <iostream>
using namespace std;

void Output(int n)
{
	if (n % 3 == 0)
	{
		cout<<"Fizz";
	}
	if (n % 5 == 0)
	{
		cout<<"Buzz";
	}
	cout << endl;
}

int main()
{
	int iNum;
	cin >> iNum;
	Output(iNum);

	system("pause");
	return 0;
}