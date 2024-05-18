#include <iostream>
using namespace std;
//
int main()
{
	const int size = 12;
	int arr[size], start_range, end_range, temp;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the profit for month "
			<< i + 1 << " : ";
		cin >> arr[i];
	}

	do {
		cout << "Enter start of range(1-12): ";
		cin >> start_range;
		cout << "Enter end of range(1-12): ";
		cin >> end_range;
	} while ((start_range > 12 || start_range < 1) || (end_range > 12 || end_range < 1));

	

	if (start_range > end_range) {
		temp = start_range;
		start_range = end_range;
		end_range = start_range;
	}


	cout << endl;
	int min = arr[0], min_month;
	int max = arr[0], max_month;
	for (size_t i = start_range-1; i < end_range; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_month = i + 1;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			max_month = i + 1;
		}

	}
	cout << "You earned the least: "
		<< min << " per month:  "
		<< min_month << endl;
	cout << "You earned the most: "
		<< max << " per month:  "
		<< max_month << endl;

	system("pause");
	return 0;
}