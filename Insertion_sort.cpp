#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
    clock_t t=clock();
	int arr[] = {12,11,13,5,6,86,1,7,14,30,2,3};
	int N = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, N);
    double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;

	printArray(arr, N);

	return 0;
}

