#include<iostream>

using namespace std;
int commonDivisor(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int greatestCommondivisor(int n, int arr[])
{
	if (n == 1) {
		return arr[0];
	}
	else {
		int tmp = commonDivisor(arr[0], arr[1]);
		for (int i = 2; i < n; i++) {
			tmp = commonDivisor(tmp, arr[i]);
		}
		return tmp;
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
	greatestCommondivisor(n, arr);
	cout << greatestCommondivisor(n, arr);
}


