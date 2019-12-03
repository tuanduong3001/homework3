#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int max = -9999999;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] >= max && arr[i] < 0)
			max=arr[i];
	}
	cout << max;
}