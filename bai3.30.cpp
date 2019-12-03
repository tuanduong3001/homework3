#include<iostream>


using namespace std;
int lastNegative(int n, int arr[], int x)
{
	int negative;
	for (int i =0; i >= 0; i--) {
		if ((arr[i] < 0) && (arr[i] > x)) {
			negative = arr[i];
			break;
		}
		else
			negative = 0;
	}
	return negative;
}
int main()
{
	int n;
	cout << "nhap n ";
	cin >> n;
	int x;
	cout << "nhap x ";
	cin >> x;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		lastNegative(n, arr, x);
	}
	
	cout << lastNegative(n, arr, x);
}