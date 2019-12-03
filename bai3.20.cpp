#include<iostream>

using namespace std;
int smallestEven(int n, int arr[])
{
	int min;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
			min = arr[i];
			break;
		}
	}
	if (count == 0)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] % 2 == 0) && (arr[i] < min))
		{
			min=arr[i];
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
		smallestEven(n, arr);
	}
	cout << smallestEven(n, arr);
}