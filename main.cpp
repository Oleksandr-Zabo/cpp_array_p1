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
		arr[i] = rand() % 20 + 1 - 10;
		cout << arr[i] << " ";
	}
	
	cout << endl;
	int min = arr[0];
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];;
		}
		if (arr[i] > max)
		{
			max = arr[i];;
		}

	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << endl;
	system("pause");
	return 0;
}
