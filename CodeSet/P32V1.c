#include<stdio.h>
#include<math.h>
int main()
{
int n,m,i,j;
int a[1010],temp=0;
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(j=i-1;j>0;j--)
 for(i=0;i<j;i++)
    if(abs(a[i+1]-m)<abs(a[i]-m)||abs(a[i+1]-m)==abs(a[i]-m)&&(a[i+1]<a[i]))
    {
        temp=a[i]; a[i]=a[i+1];a[i+1]=temp;
    }
 for(i=0;i<n;i++)
   printf("%d\n",a[i]);
 }