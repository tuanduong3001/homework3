#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int max = -999999;
	int min = 999999;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Max " << max << endl;
	cout << "Min " << min << endl;
}