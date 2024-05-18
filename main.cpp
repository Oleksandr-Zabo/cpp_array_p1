#include <iostream>
using namespace std;
//
int main()
{
	const int size = 6;
	int sum = 0, arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the profit for month "
			<< i + 1 << " : ";
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "In 6 months you have earned: "
		<< sum << endl;
	system("pause");
	return 0;
}