#include <stdio.h>
int main()
{
	int n, pos;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("Enter the position where you wish to delete: ");
	scanf("%d", &pos);
	for (int i = pos - 1; i < n; i++) arr[i] = arr[i + 1];
	printf("Resultant array after deletion: ");
	for (int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
	return 0;
}
