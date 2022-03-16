#include<stdio.h>
#include<math.h>
long long abs(long long a);
void bubble(long long a[], int n,long long m)
{
	long long mid;
	int i,j,flag;
	flag=0; 
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(abs(a[j]-m)>abs(a[j+1]-m))
			{
				mid=a[j];
				a[j]=a[j+1];
				a[j+1]=mid;
				flag=1;
			}
			else if(abs(a[j]-m)==abs(a[j+1]-m))
			{
				if(a[j]>a[j+1])
				{
					mid=a[j];
					a[j]=a[j+1];
					a[j+1]=mid;
				}
			}
		}
		if(flag==0)
		break;
	}
}

int main()
{
	long long b[1200];
	int n,i;
	long long m;
	scanf("%d %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}
	bubble(b,n,m);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",b[i]);
	}
	return 0;
}
long long abs(long long a)
{
	if (a>=0)
	return a;
	else 
	return -a;
}