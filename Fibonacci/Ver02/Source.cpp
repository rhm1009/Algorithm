#include <iostream>
using namespace std;

void Output(int rpt_, int* num_)
{
	cout << "Turn of " << rpt_ << " : ";

	int result = *num_ + *(num_ + 1);
	*num_ = *(num_ + 1);
	*(num_ + 1) = result;

	cout << result << endl;
}

int main()
{
	int iRepeat;
	cout << "How do you want to repeat time? : ";
	cin >> iRepeat;

	int  num[2] = { 0, 1 }; // Fibo Init

	for (int i = 1; i <= iRepeat; i++) {
		Output(i, num);
	}

	cout << endl;

	system("pause");
	return 0;
}