#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int max = -9999999;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] >= max) max = arr[i];
	}
	cout << max;
}