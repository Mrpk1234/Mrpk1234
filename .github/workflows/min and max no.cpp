
//Program for DS print max and min no among the array 

#include<iostream>

using namespace std;

int main ()

{

	int arr[10], n, i, max, min;

	cout << "Enter the Maximum size of array : ";

	cin >> n;

	cout << "Enter the array Element : ";

	for (i = 0; i < n; i++)

	cin >> arr[i];

	max = arr[0];

	for (i = 0; i < n; i++)

	{

		if (max < arr[i])

		max = arr[i];

	}

		min = arr[0];

		for (i = 0; i < n; i++)

{

		if (min > arr[i])

		min = arr[i];

}

cout<< "\n Smallest Element from the array : \n"<< min;

cout << "\n Largest Element from the array : \n" << max;

return 0;

}
