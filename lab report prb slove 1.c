#include <stdio.h>
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		printf("%d ", a[i]);
	}
	return 0;
}
