#include <stdio.h>
int main(){
	int n,m,i,j;
	int tmp;
	scanf("%d %d",&n,&m);
	int a[n];
	long long b[n];
	for (i = 0; i < n; i++){
		scanf("%d",&tmp);
		a[i] = tmp;
	}
	for (i = 0; i < n; i++){
		if (a[i] >= m){
			b[i] = a[i] - m;
		}else {
			b[i] = m - a[i];
		}
	}
	long long tp;
	for (i = 0; i < n -1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (b[j] > b[j+1]){
				tp = b[j];
				b[j] = b[j + 1];
				b[j+1] = tp;
				tp = a[j];
				a[j] = a[j + 1];
				a[j+1] = tp;
			}else if (b[j] == b[j+1]){
				if (a[j] > a[j+1]){
					tp = a[j];
					a[j] = a[j + 1];
					a[j+1] = tp;
				}
			}
		}
	}
	for (i = 0; i < n; i++){
		printf("%d\n",a[i]);
	}
	return 0;
}