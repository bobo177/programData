#include<stdio.h>  
long long a[1010];
long long A(long long a)
{
	if (a>=0)return a;
	return -a;
}
int main()
{
	long long n,m;
	scanf("%lld%lld",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	int i, j;
	long long hold;
 for( i = 0; i < n-1; i++)
 for(j = 0; j < n-1-i; j++)
 if(A(a[j] -m)> A(a[j+1]-m)||(A(a[j] -m)== A(a[j+1]-m)&&a[j]>a[j+1]))
 {
 hold = a[j];
 a[j] = a[j+1];
 a[j+1] = hold;
 } 
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}