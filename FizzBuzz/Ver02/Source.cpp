#include <iostream>
using namespace std;

void Output(int n)
{
	bool FBCheck = false;

	char* a = n % 3 == 0 ? "Fizz" : "";
	char* b = n % 5 == 0 ? "Buzz" : "";
	cout << a << b;

	if (a == "" && b == "") 
	{
		cout << n;
	}

	cout << endl;
}

int main()
{
	int iNum;
	cout << "Please Enter MAX Number..." << endl;
	cin >> iNum;
	for (int i = 1; i <= iNum; i++)
		Output(i);

	system("pause");
	return 0;
}