#include <stdio.h>
int main()
{
	int sum = 0, a[5] = { 45, 76, 99, 24, 86 };
	printf("Array elements: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
		sum += a[i];
	}
	printf("\nSum of it's elements: %d\n", sum);
	return 0;
}
