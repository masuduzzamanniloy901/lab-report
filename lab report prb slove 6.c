#include <stdio.h>
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("Unique elements: ");
	for (int i = 0; i < n; i++)
	{
		int c = 1;
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j] && i != j)
			{
				c = 0;
				break;
			}
		}
		if (c) printf("%d ", a[i]);
	}
	return 0;
}
