#include <stdio.h>
int main()
{
	int a[5] = { 14, 5, 11, 9, 18 }, max = a[0], min = a[0];
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	for (int i = 1; i < 5; i++)
	{
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf("\nMaximum element: %d\n", max);
	printf("Minimum element %d\n", min);
	return 0;
}

