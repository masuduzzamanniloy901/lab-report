#include <stdio.h>
#include <math.h>
int main()
{
	int n, flag = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if (n % 2 == 0 && n != 2 || n == 1) flag = 0;
	else
	{
		for (int i = 3; i <= sqrt(n); i += 2)
		{
			if (n % i == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag)
		printf("%d is a prime number.", n);
	else
		printf("%d is not a prime number.", n);
	return 0;
}

