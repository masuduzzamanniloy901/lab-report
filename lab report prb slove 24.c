#include <stdio.h>
int main()
{
	int sum = 0;
	char d[6];
	printf("Enter a six digit number: ");
	scanf("%s", &d);
	printf("Displaying number in reverse order: ");
	for (int i = 5; i >= 0; i--)
	{
		sum += d[i] - 48;
		printf("%c", d[i]);
	}
	printf("\nSum of it's digit: %d\n", sum);
	return 0;
}
