#include<iostream>


using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int negative;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < 0) {
			negative = arr[i];
			break;  // Nếu không có sẽ lấy giá trị cuối cùng
		}
		else
			negative = 1;
	}
	cout << negative;
}