#include <stdio.h>
int main()
{
	int n, c = 0;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				c++;
				break;
			}
		}
	}
	printf("No. of duplicate element %d\n", c);
	return 0;
}
