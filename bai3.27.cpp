#include<iostream>

using namespace std;
int symmetricNumber(int n)
{
	int symmetric = 0;
	while (n != 0) {
		int tmp = n % 10;  // Chia lấy phần dư 1 số
		symmetric = symmetric * 10 + tmp; // Code tìm số đối xứng
		n /= 10; // Đảo ngược số ban đầu
	}
	if (n == symmetric)
		return 1;
	return 0;
}
int symmetricArray(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (symmetricNumber(arr[i] == 1)) // Kiểm tra số gánh trong mảng
			return arr[i];
		return -1; // Nếu sai trả về giá trị -1
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	symmetricArray(n, arr);
	cout << symmetricArray(n, arr);

}
