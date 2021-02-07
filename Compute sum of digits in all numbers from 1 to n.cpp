// A Simple C++ program to compute sum of digits in numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int );

// Returns sum of all digits in numbers from 1 to n
int sumOfDigitsFrom1ToN(int n)
{
	int result = 0; // initialize result

	// One by one compute sum of digits in every number from
	// 1 to n
	for (int x = 1; x <= n; x++)
		result += sumOfDigits(x);

	return result;
}

// A utility function to compute sum of digits in a
// given number x
int sumOfDigits(int x)
{
	int sum = 0;
	while (x != 0)
	{
		sum += x %10;
		x = x /10;
	}
	return sum;
}

// Driver Program
int main()
{
	int n = 328;
	cout << "Sum of digits in numbers from 1 to " << n << " is "
		<< sumOfDigitsFrom1ToN(n);
	return 0;
}

