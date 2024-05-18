#include <iostream>
#include <ctime>
using namespace std; 

//
int main()
{
	srand(time(0));
	const int full_mem_size = 1000;
	int size, arr[full_mem_size];
	do {
		cout << "Enter size(0-1000): ";
		cin >> size;
	} while (size > 1000 || size < 0);
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	system("pause");
	return 0;
}