#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int a[], int n);
long long absl(long long x);
int m;
int num[1005];
int main()
{
	int i,n;
	
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		{
			scanf("%d", &num[i]);
				
		}
	bubbleSort(num,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
 } 
 void bubbleSort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)//ð������
{
	int flag = 0;
	for (j = 0; j < n - i - 1; j++) 
	{ 
		long long dis1 = absl(a[j] - m);
		long long dis2 = absl(a[j + 1] - m);
		if ((dis1 > dis2) || (dis1 == dis2 && a[j] > a[j + 1]))//��������
		{
			flag = 1;
			long long temp = a[j];
			a[j] = a[j + 1]; 
			a[j + 1] = temp;
		}
	}
	if (!flag)break;
}
}
 long long absl(long long x)
 {
 	if(x<0)
 		x=-1*x;
	return x;	
 }