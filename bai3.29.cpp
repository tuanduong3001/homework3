#include<iostream>


using namespace std;
void input(int& n, int arr[])
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void quickSort(int *arr, int left, int right)
{
	if (left <= right) {
		int pivot = arr[(left + right) / 2];  //Phần tử chốt là phần tử nằm giữa
		int i = left;
		int j = right;
		while (i <= j) {
			while (pivot > arr[i])
				i++;  // Nếu phần tử chốt lớn hơn phần tử bên trái thì tăng đếm lên xét tiếp
			while (pivot < arr[j])
				j--; // Còn nếu nhỏ hơn phần tử lớn bên phải thì giảm đếm để xét tiếp
			if (i <= j) {
				swap(arr[i], arr[j]); // Xét xem phần tử nào lớn hơn thì đưa về bên phải còn phần tử nào nhỏ hơn thì đưa về bên trái
				i++;
				j--;
			}
		}
		if (left > j)
			quickSort(arr, left, j);  // Nếu phần tử bên trái lớn hơn cột chốt j thì xếp j thay thế vô vị trí phần tử đó còn phần tử đó thay thế vị trí của j 

		if (right < i)
			quickSort(arr, i, right);  // Nếu phần tử bên phải nhỏ hơn cột chốt i thì xếp i thay thế vô vị trí phần tử đó còn phần tử đó thay thế vị trí của i
	}

}
int main()
{
	int n;
	int arr[100];
	input(n, arr);
	quickSort(arr, 0, n - 1);
	cout << "Doan chua tat ca cac phan tu trong mang la " << arr[0] << " " << arr[n - 1];
}