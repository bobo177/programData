#include <stdio.h>
#include  <stdlib.h> 

long long juedui (int a,int m);
int main ()
{
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n]; 
	
	int i;
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int b;
	int j,k;
	for (j=0;j<n-1;j++) {
		for (k=0;k<n-1-j;k++) {
			if ( juedui(a[k],m) > juedui(a[k+1],m) ){
			
				b=a[k];
				a[k]=a[k+1];
				a[k+1]=b;
			}
			
			else if ( juedui(a[j],m)== juedui(a[j+1],m) ){
				if (a[j]>a[j+1] ) {
					int c;
					c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;
				}
			}
		}
	}
	
	
	
	int l;
	for (l=0;l<n;l++) {
		printf("%d\n",a[l]);
	}
	
	
	
	
	return 0;
}


	long long juedui (int a,int m) {
		long long x;
		if (a>0 && m>0) 
		{
			if (a>m) x=a-m;
			else x=m-a;
		}
		if (a>0 && m<0) x=a-m;
		if (a<0 && m>0) x=m-a;
		if (a<0 && m<0) {
			if (a>m) x=a-m;
			else x=m-a;
		};
		return x;
	}