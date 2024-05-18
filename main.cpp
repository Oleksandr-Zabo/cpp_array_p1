#include <iostream>
using namespace std;
//
int main()
{
	const int size = 5;
	int side, sum = 0, arr[size];
	for (int i = 0; i < size; i++)
	{
		do {
			cout << "Enter side "
				<< i + 1 << " lenth: ";
			cin >> side;

		} while (side < 0);
		arr[i] = side;
		sum += side;

	}
	cout << "Perimeter of the pentagon: "
		<<sum << endl;
	system("pause");
	return 0;
}