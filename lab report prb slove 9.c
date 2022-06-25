#include <stdio.h>
int main()
{
	int x, n = 0, m = 0, odd[100], even[100];
	while (scanf("%d", &x) && x != 0)
	{
		if (x % 2 == 0)
		{
			even[n] = x;
			n++;
		}
		else
		{
			odd[m] = x;
			m++;
		}
		printf("%d\n", x);
	}
	printf("Array of even elements: ");
	for (int i = 0; i < n; i++) printf("%d ", even[i]);
	printf("\nArray of odd elements: ");
	for (int i = 0; i < m; i++) printf("%d ", odd[i]);
	return 0;
}
