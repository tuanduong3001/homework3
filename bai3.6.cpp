#include<iostream>
#include<math.h>

using namespace std;
bool isPrime(int n)
{
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
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (isPrime(arr[i]) && arr[i] > 2)
			count += 1;
	}
	cout << count;


}