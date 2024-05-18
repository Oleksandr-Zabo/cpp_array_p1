#include <iostream>
using namespace std;
//
int main()
{
	const int size = 10;
	int arr[size], num_user, sum_people = 0, sum_1 = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "How many people live in "
			<< i + 1 << " flat: ";
		cin >> arr[i];
	}
	for (int j = 0; j < 4; j++)
	{
		sum_1 = 0;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " "; 
			sum_1 += arr[i];
			sum_people += arr[i];
			
		}
		cout << endl;
	}
	do {
		cout << "Enter number of flat: ";
		cin >> num_user;
	} while (num_user < 1 || num_user > 40);
	if (num_user > 30) {
		num_user -= 30;
	}
	else if (num_user > 20) {
		num_user -= 20;
	}
	else if (num_user > 10) {
		num_user -= 10;
	}
	cout << endl;
	if (num_user % 2 == 0)
		{
		cout << "In this flat: " << arr[num_user - 1] << " people\n"
			<< "Their neighbors: " << arr[num_user - 2] << " people\n" << endl;
		}
	else {
		cout << "In this flat: " << arr[num_user - 1] << " people\n"
			<< "Their neighbors: " << arr[num_user] << " people\n" << endl;
		}

	cout <<"All of people: "<< sum_people << endl;
	cout << "All of people in entrance: " << sum_1 << endl;

	cout << "Flats with lerge family: ";
	for (int j = 0; j < 4; j++)
	{
		sum_1 = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 5) {
				cout << j * 10 + (i + 1) << " ";
			}

		}
	}
	
	cout << endl;
	system("pause");
	return 0;
}