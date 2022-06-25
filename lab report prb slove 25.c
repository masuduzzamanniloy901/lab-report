#include <stdio.h>
#include <math.h>
int main()
{
	int opt, n, fact = 1, flag = 1;
	printf("1. Factorial\n");
	printf("2. Prime or not\n");
	printf("3. Odd\n");
	printf("4. Even\n");
	printf("5. Exit\n");
	printf("Enter any option: ");
	scanf("%d", &opt);
	switch (opt)
	{
		case 1:
			printf("Enter a number: ");
			scanf("%d", &n);
			for (int i = 2; i <= n; i++) fact *= i;
			printf("Factorial of %d is: %d\n", n, fact);
			break;

		case 2:
			printf("Enter a number: ");
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
			break;

		case 3:
			printf("Enter a number: ");
			scanf("%d", &n);
			if (n % 2 == 1) printf("Yes, odd.\n");
			else printf("Not, odd.\n");
			break;

		case 4:
			printf("Enter a number: ");
			scanf("%d", &n);
			if (n % 2 == 0) printf("Yes, even.\n");
			else printf("Not, even.\n");
			break;

		case 5:
			printf("Exiting...\n");
			break;

		default:
			printf("Invalid option.\n");
			break;
	}
	return 0;}
