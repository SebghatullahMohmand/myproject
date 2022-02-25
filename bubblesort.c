#include <stdio.h>
int main()
{	
	int array[100],size,i,temp=0;
	printf("enter the size of the array:");
	scanf("%d",&size);
	printf("enter the value in array:");
	for (i=0;i<size-1;i++)
	{
		for (int j=0;j<size-i;j++)
		{
			if (array[j]>array[j+1])
			{
			    temp=array[j];
			    array[j]=array[j+1];
			    array[j+1]=temp;
			}
		}
	}
	printf("sorted array:");
	for (i=0;i<size;i++)
	    printf("%d",array[i]);
}	

