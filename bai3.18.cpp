#include<iostream>
#include<math.h>

using namespace std;
int isPrime(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int biggestPrime(int n, int arr[])
{
	int count = 0;
	int max;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]))
		{
			count++;
			max = arr[i];
			break;
		}
	}
	if (count == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if ((isPrime(arr[i])) && (max < arr[i]))
		{
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		biggestPrime(n, arr);
	}
	cout << biggestPrime(n, arr);
}