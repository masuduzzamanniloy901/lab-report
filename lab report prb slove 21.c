#include <stdio.h>
int main()
{
	int sum = 0;
	printf("Integer between 100 and 200 which are divisible by 9.\n");
	for (int i = 108; i < 200; i += 9)
	{
		sum += i;
		printf("%d ", i);
	}
	printf("\nSum of them: %d\n", sum);
	return 0;
}
