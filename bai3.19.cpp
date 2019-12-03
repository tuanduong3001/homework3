#include<iostream>

using namespace std;
int isPerfect(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			s += i;
			
	}
	if (s == n)
		return 1;
	else
		return 0;	
}
int smallestPerfect(int n, int arr[])
{
	int count = 0;
	int min;
	for (int i = 0; i < n; i++)
	{
		if (isPerfect(arr[i]))
		{
			count++;
			min = arr[i];
			break;
		}

	}
	if (count == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if ((isPerfect(arr[i])) && (min > arr[i]))
		{
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		smallestPerfect(n, arr);
	}
	cout << smallestPerfect(n, arr);
}