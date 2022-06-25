#include <stdio.h>
int main()
{
	int temp, x[10], a[5] = { 7, 3, 6, 9, 3}, b[5] = { 11, 0, 2, 5, 8 };
	for (int i = 0; i < 5; i++)
	{
		x[i] = a[i];
		x[i + 5] = b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (x[i] < x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	printf("After merging two arrays, displaying it in descending order: ");
	for (int i = 0; i < 10; i++) printf("%d ", x[i]);
	return 0;
}
