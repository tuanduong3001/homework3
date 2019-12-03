#include<iostream>
#include<math.h>


using namespace std;
bool isPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int findnumber = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int i = n; i >= 0; i--) {
			if (isPrime(arr[i]))
			{
				findnumber = arr[i];
				break;
			}
			else
				findnumber = -1;
		}
	}
	cout << findnumber;
}