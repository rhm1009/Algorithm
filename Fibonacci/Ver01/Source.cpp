#include <iostream>
using namespace std;

void Output(int rpt_, int* num_)
{
	cout << "Turn of " << rpt_ << " : ";

	int result = num_[0] + num_[1];
	num_[0] = num_[1];
	num_[1] = result;

	cout << result << endl;
}

int main()
{
	int iRepeat;
	cout << "How do you want to repeat? : ";
	cin >> iRepeat;

	for (int i = 1, num[2] = { 0, 1 }; i <= iRepeat; i++) {
		Output(i, num);
	}

	cout << endl;

	system("pause");
	return 0;
}