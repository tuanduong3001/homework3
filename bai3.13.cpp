#include<iostream>


using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int positive = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int i = n; i >= 0; i--) {
			if (arr[i] >= 0)
			{
				positive = arr[i];
				break;
			}
			else
				positive = -1;
		}
	}
	cout << positive;
}
