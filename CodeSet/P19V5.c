#include<stdio.h>
int n, m;
int num[1002];
void bubbleSort(int a[], int n);

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i <= n - 1; i++){
		scanf("%d", &num[i]);
	}
	bubbleSort(num, n);
	for(int i = 0; i <= n - 1; i++){
		printf("%d\n", num[i]);
	}
} 

void bubbleSort(int a[], int n)
{
int i, j;
int hold;
int a1, a2;
for(i = 0; i < n - 1; i++)
for(j = 0; j < n-1-i; j++)
a1 = a[j] - m;
a2 = a[j + 1] - m; 
if(a1 < 0)
a1 = -a1;
if(a2 < 0)
a2 = -a2;
if(a1 > a2)
{
hold = a[j];
a[j] = a[j + 1];
a[j + 1] = hold;
}
else if(a1 == a2){
	if(a[j] > a[j + 1]){
		hold = a[j];
	a[j] = a[j + 1];
	a[j + 1] = hold;
	}
}
}
