#include <stdio.h>
int main()
{
	int n, temp;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 1; i < 5; i++)
	{
		if (a[0] > a[i])
		{
			printf("Second largest element: %d\n", a[i]);
			break;
		}
	}
	return 0;
}
