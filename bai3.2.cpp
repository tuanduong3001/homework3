#include<iostream>

using namespace std;
int main()
{
	float n;
	cin >> n;
	int arr[1000];
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	cout << s;
}