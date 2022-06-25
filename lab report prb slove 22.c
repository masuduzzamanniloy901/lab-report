#include <stdio.h>
int main()
{
	int n;
	printf("Enter n term: ");
	scanf("%d", &n);
	printf("Sum of the series 1+11+111+..n terms: ");
	for (int i = 1; i <= n; i++) printf("%d", i);
	return 0;
}
