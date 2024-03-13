#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{

int pivot=arr[high];

int i=(low-1);

for(int j=low;j<=high;j++)
{

	if(arr[j]<pivot)
	{
	i++;
	swap(arr[i],arr[j]);
	}
}
swap(arr[i+1],arr[high]);
return (i+1);
}
			
void quickSort(int arr[],int low,int high)
{

if(low<high)
{
	int pi=partition(arr,low,high);
	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);
}
}
			

int main()
{
    clock_t t=clock();
    int arr[]={96,58,46,21,75,36,74,15,25,74};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Function call
    quickSort(arr,0,n-1);
    double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;
    //Print the sorted array
    cout<<"Sorted Array\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
