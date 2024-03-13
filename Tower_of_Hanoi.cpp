#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
	if (n == 0) { 
		return; 
	} 
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
	cout << "Move disk " << n << " from rod " << from_rod 
		<< " to rod " << to_rod << endl; 
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

// Driver code 
int main() 
{ 
    clock_t t=clock();
	int N = 7; 

	towerOfHanoi(N, 'A', 'C', 'B');

    double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;

	return 0; 
} 
