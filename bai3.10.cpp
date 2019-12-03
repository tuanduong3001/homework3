#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	int evennumber = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if ((arr[i] >= 0) && (arr[i] % 2 == 0)) {
			evennumber = arr[i] ;
			break;
		}
		else
			evennumber = -1;
	}
	cout << evennumber;
}
