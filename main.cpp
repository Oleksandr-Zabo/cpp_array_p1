#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    const int full_memory_size = 1000;
    int arr[full_memory_size];
    int size;
    do
    {
        cout << "Enter the size of the array(0 - 1000): ";
        cin >> size;
    } while (size > 1000 || size < 0);

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 201 - 100;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int first_neg, last_neg,
         temp;
    int min = arr[0], min_num;
    int max = arr[0], max_num;
    float sum_neg = 0,
        sum_neg_range = 0,
        product_max_min = 1, product_even = 1;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_num = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_num = i;
        }
        if (arr[i] < 0) {
            sum_neg += arr[i];
            last_neg = i;
        }
        if (i % 2 == 0) {
            product_even *= arr[i];
        }
    }
    

    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 0) {
            first_neg = i;
        }
    }

    if (min_num > max_num) {
        temp = min_num;
        min_num = max_num;
        max_num = temp;
    }
    for (int i = min_num + 1; i < max_num; i++)
    {
        product_max_min *= arr[i];
    }
    for (int i = first_neg + 1; i < last_neg; i++)
    {
        sum_neg_range += arr[i];
    }


    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    cout << "Sum of negative numbers: " 
        << sum_neg << endl;

    cout << "Product max-min: "
        << product_max_min << endl;

    cout << "Product of even elements: "
        << product_even << endl;

    cout << "The sum between the "
        << "first and last negative digit : "
        << sum_neg_range << endl;


    return 0;
}