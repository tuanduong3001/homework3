#include<iostream>

using namespace std;
bool isPerfect(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return true;
	else
		return false;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int findnumber = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (isPerfect(arr[i]) && arr[i] >= 6)
		{
			findnumber = arr[i];
			break;
		}
		else
			findnumber = -1;
	}
	cout << findnumber;
}