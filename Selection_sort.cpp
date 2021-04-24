// Author: Aslam Khan
// Email : aslamkhanofficial@yahoo.com
// Institute : Air University Islamabad

#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 34,53,64,63,74,24,67,88,90,22 };
	int n = 10; // size of Array
	int min;// to store the index of minimum Value
	int temp;// Store VAlue Temprory while Swapping
	for (int i = 0; i < (n - 1); i++)// (n-1) because the last index value will be Automatically Sorted
	{
		min = i;		// Currnet index as minimum value index

		for (int j = i + 1; j < n; j++) // Array is Sorted till index 'i', so sorting will be started from i+1 index
		{
			if (arr[j] < arr[min]) // check for minimum Value
			{
				min = j;
			}
		}

		if (min != i)// swapping the values
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	cout << "Sorted Array = ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	


	system("pause");
}
