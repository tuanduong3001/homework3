#include<stdio.h>
int main()
{
	int n, i;
	int n1 = 1;
	int n2 = 1;
	int n3;
	printf("give me n ");
	scanf_s("%d", &n);
	printf("%d %d ", n1, n2);
	for (i = 1; i <= n; i++)
	{
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		printf("%d ", n3);
	}
}


