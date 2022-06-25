#include <stdio.h>
int main()
{
	int n, element, pos;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n + 1];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("Enter the position and the new element: ");
	scanf("%d%d", &pos, &element);
	for (int i = n; i > pos - 1; i--) arr[i] = arr[i - 1];
	arr[pos - 1] = element;
	printf("Resultant array after insertion: ");
	for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
	return 0;
}
