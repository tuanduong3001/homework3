#include<iostream>


using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	float avg = 0;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 5 == 0)
		{
			s += arr[i];
			avg = (float)s / (i + 1);
		}
	}
	cout << avg;
}