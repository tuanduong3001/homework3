#include<iostream>
#include<math.h>

using namespace std;
bool checkPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int arr[1000];
	float avg = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (checkPrime(arr[i]))
		{
			s += arr[i];
			avg = (float)s / (i + 1);
		}
	}
	cout << avg;
	
}

