#include <stdio.h>
#include <stdlib.h>

int arr[1005];

void bubbleSort(int a[], int n, int m) {
	int i, j, hold, flag;
	for (i = 0; i < n - 1; i++) {
		flag = 0; //�ǵó�ʼ��
		for (j = 0; j < n - 1 - i; j++) {
			if (abs(a[j] - m) > abs(a[j + 1] - m)) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
			if (abs(a[j] - m) == abs(a[j + 1] - m)) {
				if (a[j] > a[j + 1]) {
					hold = a[j];
					a[j] = a[j + 1];
					a[j + 1] = hold;
					flag = 1;
				}
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

int main() {
	int n, m, i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubbleSort(arr, n, m);
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}