#include<iostream>


using namespace std;
void input(int& n, int arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}
void swapNumber(int n,int arr[])
{
	int min = arr[0], max = arr[0];
	int locMin = 0, locMax = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			locMax = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			locMin = i;
		}
	}
		swap(arr[locMax], arr[locMin]);
}
int main()
{
	int n;
	int arr[1000];
	input(n, arr);
	swapNumber(n, arr);
	output(n, arr);
	
}
