#include<iostream>


using namespace std;
int firstOdd(int n)
{
	while (n > 10) {
		n /= 10;  // Nếu n lớn hơn 10 thì lấy số chữ số đầu tiên của n
	}
		if (n % 2 != 0) // Số lẻ
			return 1;
		return 0;
}
int processFirstodd(int n, int arr[])
{
	for (int i = 0; i < n; i++) {
		if (firstOdd(arr[i]))
			return arr[i];
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	processFirstodd(n, arr);
	cout << processFirstodd(n, arr);
}
