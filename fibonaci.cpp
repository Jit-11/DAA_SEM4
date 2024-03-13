#include <bits/stdc++.h>
using namespace std;

int prev1 = 1;
int prev2 = 0;

void fib(int n)
{
	if (n < 3) {
		return;
	}
	int fn = prev1 + prev2;
	prev2 = prev1;
	prev1 = fn;
	cout << fn << " ";
	return fib(n - 1);
}


void printFib(int n)
{
	if (n < 1) {
		cout << "Invalid number of terms\n";
	}

	else if (n == 1) {
		cout << 0;
	}

	else if (n == 2) {
		cout << "0 1";
	}

	else {
		cout << "0 1 ";
		fib(n);
	}
	return;
}

int main()
{
	int n = 49;
    clock_t t=clock();
	// Function call
	printFib(n);
    double time_taken=((double)t/CLOCKS_PER_SEC);
	cout<<endl<<time_taken<<endl;
	
	return 0;
}
