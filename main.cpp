#include <iostream>
using namespace std;
//
int main()
{
	const int size = 12;
	int sum = 0, arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the profit for month "
			<< i + 1 << " : ";
		cin >> arr[i];
	}

	cout << endl;
	int min = arr[0], min_month;
	int max = arr[0], max_month;
	for (size_t i = 0; i < size; i++)
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
		<< min<<" per month:  "
		<<min_month << endl;
	cout << "You earned the most: "
		<< max << " per month:  "
		<< max_month << endl;

	system("pause");
	return 0;
}