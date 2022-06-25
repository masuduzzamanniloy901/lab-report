#include <stdio.h>
int main()
{
	int n;
	float sum = 0;
	printf("Enter the range: ");
	scanf("%d", &n);
	printf("Displaying harmonic series in range(%d): ", n);
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
		if (i == 1) printf("1 ");
		else printf("1/%d ", i);
	}
	printf("\nSum of harmonic series in range(%d): %.1f\n", n, sum);
	return 0;
}
