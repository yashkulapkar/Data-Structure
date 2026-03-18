#include<stdio.h>
int main()
{
	int arr[50],n,i,j,min,temp;
	
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	
	for(i=0; i<n;i++)
	{
	scanf("%d",&arr[i]);
}
	for(i=0;i<n-1;i++)
	{
		min = 1;
		
		for(j=i=1;j<n;j++)
		{
			if(arr[j] < arr[min])
			{
				min=j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	printf("Sorted array:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
