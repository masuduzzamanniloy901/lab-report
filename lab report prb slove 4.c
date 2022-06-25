#include <stdio.h>
int main()
{
	int A[5] = { 45, 76, 99, 24, 86}, B[5];
	printf("After copying elements from array A to B\n");
	for (int i = 0; i < 5; i++)
	{
		B[i] = A[i];
		printf("%d ", B[i]);
	}
	return 0;
}
