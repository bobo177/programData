#include <stdio.h>
#include <stdlib.h>
long long absf(long long c){
	if(c>=0){
		return c;
	}else{
		return -c;
	}
}
int main(){
	long long m,n,i,temp,j;
	long long x,y;
	scanf("%lld %lld",&n,&m);
	long long a[1002]={0};
	for(i=0;i<=n-1;i++){
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-1-i;j++){
			x=absf(a[j]-m);y=absf(a[j+1]-m);
			if(x>y){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}else if(x==y){
				if(a[j]>a[j+1]){
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	for(i=0;i<=n-1;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}