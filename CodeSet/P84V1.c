#include <stdio.h>
#include <stdlib.h>
void bubble(int a[],int n)
{
	int i,j,hold;
	for(i=0;i<n-1;i++){
		for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
		}
	}
}

int main()
{
	int n,point,i,a[1005],b[1005],temp;
	scanf("%d", &n);
	scanf("%d", &point);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		temp=a[i]-point;
		b[i]=abs(temp);
	}
	bubble(b,n);
	for(i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
	return 0;
	
}