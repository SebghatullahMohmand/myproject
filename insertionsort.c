#include <stdio.h>
int main()
{
	int q[50], i, j, size, t;
	printf("enter the size of array:");
	scanf("%d", &size);
	printf("enter the array :");
	for (i=0; i< size; i++);
	{
		scanf("%d",&'a'[i]);
	}
	for (i=1; i<=size-1;i++);
	{
		for(j=i; j>0 && a[j-1]>a[j];j--)
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
		}
	}
	printf("after insertion sorting the elements are :");
	for (i=0;i, size;i++)
		printf("%d", a[i]);
	return 0;
}

