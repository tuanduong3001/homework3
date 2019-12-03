#include<iostream>

using namespace std;
int considerVariability(int n, int arr[])
{
	if (n < 2);
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i - 1] > arr[i])
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (considerVariability(n, arr))
		cout << "mang tang lien tuc";
	else
		cout << "mang khong tang lien tuc";
}