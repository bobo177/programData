#include <stdio.h>
#include <string.h>
int arr[1005] = { 0 };
int arr2[1005] = { 0 };
int main() {
	int n, a;
	int i = 0;
	scanf("%d%d", &n, &a);
	while (n) {
		scanf("%d", &arr[i]);
		i++;
		n--;
	}
	int k = i;
	int k2 = i;
	memcpy(arr2, arr, sizeof(arr));
	i = 0;
	while (k) {
		arr2[i] = arr2[i] - a;
		k--;
		i++;
	}
	k = k2;
	i = 0;
	while (k) {
		if (arr2[i]<0) {
			arr2[i] = -arr2[i];
		}
		k--;
		i++;
	}
	int hold;
	k = k2;
	for (i = 0; i < k; i++) {
		for (int j = 0; j < k - 1 - i; j++) {
			if (arr2[i] > arr2[i + 1] ||( arr2[i] == arr2[i + 1] && arr[i] > arr[i + 1])) {
				hold = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = hold;
			}
		}
	}
	for (i = 0; i < k2; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}