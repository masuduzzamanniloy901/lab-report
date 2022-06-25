#include <stdio.h>
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
	printf("Displaying array in reverse order: ");}
	for (int i = n - 1; i >= 0; i--) {printf("%d ", a[i]);}
	return 0;
}
