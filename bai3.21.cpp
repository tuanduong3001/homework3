#include<iostream>


using namespace std;
int biggestNegative(int n, int arr[])
{
	int max;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] < 0))
		{
			count++;
			max = arr[i];
			break;
		}
	}
	if (count == 0)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] < 0) && (max < arr[i]))
		{
			max = arr[i];
		}
	}
	return max;
}
int findPosition(int n,int arr[])
{
	int find = 0;
	int max = biggestNegative(n, arr);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			find = i + 1; // Phải là i+1 vì vị trí đầu tiên trong mảng là 0 chứ không phải là 1
		}
	}
	return find;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		findPosition(n, arr);
	}
	cout << findPosition(n, arr);
}

