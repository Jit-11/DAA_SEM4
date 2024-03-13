#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int x)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	clock_t t=clock();
	int arr[] = {85,75,42,1,25,63,95,100,5,7,11 };
	int x = 11;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, x);
	double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;

	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
