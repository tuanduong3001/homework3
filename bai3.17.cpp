#include<iostream>

using namespace std;
float biggestNegative(int n, float arr[])
{
	float max;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			count++;
			max = arr[i];
			break;
		}
	}
	if (count == 0)
		return 0;
	for (int i =0; i < n; i++)
	{
		if ((arr[i] < 0) && (max < arr[i]))
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
	float arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		biggestNegative(n,arr);
	}
	cout << biggestNegative(n,arr);
}


