#include <stdio.h>
int main()
{
	int array [100],postion,c,n;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter %d element:",n);
	for (c=0;c<n;c++)
		scanf("%d",&array[c]);
	printf("enter the location where you wish to delete element:");
	scanf("%d",&postion);
	if (postion>=n+1)
		printf("deletion not possibe.\n");
	else
	{
		for (c=postion-1;c<n-1;c++)
		   array[c]=array[c+1];
		printf("resultant array is:");
		for (c=0;c<n-1;c++)
		   printf("%d",array[c]);
	}
	return 0;
}
