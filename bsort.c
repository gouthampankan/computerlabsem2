#include<stdio.h>
void main()
{
	int n,a[30],i,j,t;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("This is the unsorted array :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("This is the sorted array :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
