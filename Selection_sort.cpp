#include <bits/stdc++.h> 
using namespace std; 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx;  
	for (i = 0; i < n - 1; i++) 
	{ 
		min_idx = i; 
		for (j = i + 1; j < n; j++) 
		{ 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 
		if (min_idx != i) 
			swap(arr[min_idx], arr[i]); 
	} 
} 
 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
    { 
		cout << arr[i] << " "; 
    } 
} 

int main() 
{ 
    clock_t t=clock();
	int arr[] = {64,25,12,22,11,56,1,5,75,95,100,52,74}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	selectionSort(arr, n);
    double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;

	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 


